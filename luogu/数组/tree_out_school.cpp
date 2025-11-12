#include <stdio.h>

int main() {
    int l, m;
    scanf("%d %d", &l, &m);
    
    // 创建一个布尔数组来记录哪些树被移除
    int removed[l + 1]; // 位置从0到l，共l+1个元素
    for (int i = 0; i <= l; i++) {
        removed[i] = 0; // 初始状态都没有移除
    }

    // 处理每个区域
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++) {
            removed[j] = 1; // 标记该位置的树被移除
        }
    }

    // 计算剩余的树木数量
    int remaining_trees = 0;
    for (int i = 0; i <= l; i++) {
        if (removed[i] == 0) {
            remaining_trees++;
        }
    }

    // 输出剩余的树木数量
    printf("%d\n", remaining_trees);
    return 0;
}
