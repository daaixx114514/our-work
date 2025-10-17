/* color_matrix.c
   Cross-platform colorful animated terminal demo:
   - Top: cycling gradient text
   - Body: dynamic "matrix rain" with varying brightness
   Compile:
     Linux/macOS:
       gcc -std=c99 -O2 -o color_matrix color_matrix.c
     Windows (MSYS2 / MinGW):
       gcc -std=c99 -O2 -o color_matrix.exe color_matrix.c
     MSVC (Developer Command Prompt):
       cl /Od color_matrix.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <signal.h>

#ifdef _WIN32
  #include <windows.h>
  #ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
    #define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
  #endif
#else
  #include <unistd.h>
  #include <sys/ioctl.h>
#endif

/* Sleep in milliseconds */
static void msleep(int ms) {
#ifdef _WIN32
    Sleep(ms);
#else
    usleep(ms * 1000);
#endif
}

/* Try to enable ANSI VT processing on Windows. Returns 1 if OK. */
#ifdef _WIN32
static int enable_virtual_terminal() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE) return 0;
    DWORD dwMode = 0;
    if (!GetConsoleMode(hOut, &dwMode)) return 0;
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    if (!SetConsoleMode(hOut, dwMode)) return 0;
    return 1;
}
#endif

/* Get terminal size (cols, rows). Returns 1 on success, 0 on failure. */
static int get_terminal_size(int *cols, int *rows) {
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!GetConsoleScreenBufferInfo(h, &csbi)) return 0;
    *cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    *rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    return 1;
#else
    struct winsize w;
    if (ioctl(1, TIOCGWINSZ, &w) == -1) return 0;
    *cols = (int)w.ws_col;
    *rows = (int)w.ws_row;
    return 1;
#endif
}

/* Restore terminal (show cursor + reset colors) */
static void restore_terminal(void) {
    /* Reset attributes and show cursor */
    printf("\x1b[0m\x1b[?25h");
    fflush(stdout);
}

/* Signal handler to restore terminal on Ctrl+C */
static void handle_sigint(int sig) {
    (void)sig;
    restore_terminal();
    exit(0);
}

/* Generate a printable random character */
static char rand_char(void) {
    int r = rand() % 94; /* printable 33..126 */
    return (char)(33 + r);
}

int main(void) {
    /* Ensure we restore terminal on exit */
    atexit(restore_terminal);
    signal(SIGINT, handle_sigint);

    /* Try to enable VT on Windows; if it fails we'll still try ANSI but may not work */
#ifdef _WIN32
    enable_virtual_terminal();
#endif

    /* Hide cursor */
    printf("\x1b[?25l");
    fflush(stdout);

    srand((unsigned)time(NULL));

    int cols = 80, rows = 24;
    if (!get_terminal_size(&cols, &rows)) {
        /* fallback defaults already set */
    }

    /* Reserve top 2 lines for gradient text + a blank line */
    int top_lines = 2;
    int usable_rows = rows - top_lines;
    if (usable_rows < 6) usable_rows = 6; /* avoid too-small terminal messing algorithm */

    /* Allocate arrays per column */
    int *head = (int*)malloc(sizeof(int) * cols);
    int *tail = (int*)malloc(sizeof(int) * cols);
    if (!head || !tail) {
        fprintf(stderr, "allocation failed\n");
        restore_terminal();
        return 1;
    }

    /* Initialize drops with some starting offsets (negative => not started) */
    for (int c = 0; c < cols; ++c) {
        if ((rand() % 10) == 0) head[c] = rand() % usable_rows;
        else head[c] = -(rand() % usable_rows);
        tail[c] = 3 + (rand() % (usable_rows / 6 + 6)); /* tail length */
    }

    const char *msg = "  Hello, Colorful World!  (press Ctrl+C to quit)  ";
    int msglen = (int)strlen(msg);
    int frame = 0;
    const int delay_ms = 50; /* 20 FPS-ish */

    while (1) {
        /* Refresh terminal size occasionally in case user resized */
        int nc, nr;
        if (get_terminal_size(&nc, &nr)) {
            if (nc != cols || nr != rows) {
                /* reallocate arrays on width change */
                int *new_head = (int*)realloc(head, sizeof(int) * nc);
                int *new_tail = (int*)realloc(tail, sizeof(int) * nc);
                if (new_head && new_tail) {
                    head = new_head; tail = new_tail;
                    cols = nc; rows = nr;
                    usable_rows = rows - top_lines;
                    if (usable_rows < 6) usable_rows = 6;
                    for (int c = 0; c < cols; ++c) {
                        if (head[c] < 0) head[c] = -(rand() % usable_rows);
                        if (tail[c] <= 0) tail[c] = 3 + (rand() % (usable_rows / 6 + 6));
                    }
                }
            }
        }

        /* Clear screen and move cursor to home */
        printf("\x1b[2J\x1b[H");

        /* Print gradient message centered on first line */
        int start_col = (cols - msglen) / 2;
        if (start_col < 0) start_col = 0;
        printf("\x1b[1;%dH", start_col + 1); /* move to row 1, col start+1 */

        for (int i = 0; i < msglen; ++i) {
            /* create a cycling 256-color index: keep within 16..231 for nice colors */
            int color = 16 + ((frame * 3 + i * 8) % 216);
            printf("\x1b[38;5;%dm%c", color, msg[i]);
        }
        printf("\x1b[0m"); /* reset attributes for safety */

        /* Start drawing body from row 3 (1-based). We'll print row by row. */
        for (int r = 0; r < usable_rows; ++r) {
            int display_row = r + top_lines + 1; /* 1-based row to move to */
            printf("\x1b[%d;1H", display_row); /* move to row, col 1 */

            /* Build the line */
            for (int c = 0; c < cols; ++c) {
                int h = head[c];
                int t = tail[c];
                /* map r (0..usable_rows-1) to whether it's inside the tail */
                if (h >= 0 && r <= h && r > h - t) {
                    int pos_in_tail = h - r; /* 0 => head (brightest) */
                    char ch = rand_char();
                    if (pos_in_tail == 0) {
                        /* head: bright white */
                        printf("\x1b[38;5;15m%c", ch);
                    } else {
                        /* trailing characters: greenish gradient depending on pos */
                        int color = 46 + pos_in_tail * 6; /* 46.. roughly 150, stays within 0..255 */
                        if (color > 231) color = 231;
                        printf("\x1b[38;5;%dm%c", color, ch);
                    }
                } else {
                    putchar(' ');
                }
            }
            printf("\x1b[0m"); /* reset attributes end of line */
        }

        fflush(stdout);

        /* Update drops */
        for (int c = 0; c < cols; ++c) {
            if (head[c] >= 0) {
                head[c] += 1;
                if (head[c] - tail[c] > usable_rows) {
                    /* finished, restart after a random pause (negative offset) */
                    head[c] = -(rand() % (usable_rows + 1));
                    tail[c] = 3 + (rand() % (usable_rows / 6 + 6));
                }
            } else {
                /* not active: small chance to start */
                if ((rand() % 100) < 3) { /* ~3% chance each frame to start */
                    head[c] = 0;
                    tail[c] = 3 + (rand() % (usable_rows / 6 + 6));
                }
            }
        }

        frame++;
        msleep(delay_ms);
    }

    /* never reached, but keep tidy */
    free(head);
    free(tail);
    restore_terminal();
    return 0;
}
