#include <stdio.h>
#include <stdbool.h>

// 检查关系的自反性
bool isReflexive(int relation[][3], int n) {
    for (int i = 0; i < n; i++) {
        if (relation[i][i] != 1) {
            return false; // 若某个元素没有与自己建立关系，返回false
        }
    }
    return true;
}

// 检查关系的对称性
bool isSymmetric(int relation[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (relation[i][j] != relation[j][i]) {
                return false; // 若关系(i,j)与(j,i)不相等，返回false
            }
        }
    }
    return true;
}

// 检查关系的传递性
bool isTransitive(int relation[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (relation[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (relation[j][k] == 1 && relation[i][k] != 1) {
                        return false; // 若满足传递性条件的关系不成立，返回false
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    // 设定关系矩阵，1 表示有关系，0 表示没有关系
    int relation[3][3] = {
        //(1,1),(1,4),(2,2),(2,3),(3,2),(3,3),(4,1),(4,4)
        // {1, 1, 0},  // a 与 a, b 有关系
        // {1, 1, 1},  // b 与 a, b, c 有关系
        // {0, 1, 1}   // c 与 b, c 有关系
        (1,1),(1,4),(2,1), (2,2), (2,3),(3,2),(3,3),(4,1),(4,4)
    };
    
    int n = 3; // 集合大小
    
    printf ("判断结果：\n");
    if (isReflexive(relation, n)) {
        printf("反身.\n");
    } else {
        printf("not 反身.\n");
    }

    if (isSymmetric(relation, n)) {
        printf("对称.\n");
    } else {
        printf("not 对称.\n");
    }

    if (isTransitive(relation, n)) {
        printf("传递.\n");
    } else {
        printf("not 传递.\n");
    }

    return 0;
}
