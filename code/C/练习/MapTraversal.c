#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100 // 最大顶点数量

// 定义邻接表中的边节点结构
typedef struct EdgeNode {
    int vertex;               // 邻接点编号
    struct EdgeNode *next;    // 指向下一个邻接点
} EdgeNode;

// 定义邻接表中的顶点节点结构
typedef struct VertexNode {
    int data;                 // 顶点数据
    EdgeNode *firstEdge;      // 指向第一个邻接点
} VertexNode;

// 定义邻接表结构
typedef struct {
    VertexNode vertices[MAX_VERTICES]; // 顶点数组
    int vertexCount, edgeCount;        // 顶点数量和边数量
} AdjList;

// 定义邻接矩阵结构
typedef struct {
    int matrix[MAX_VERTICES][MAX_VERTICES]; // 邻接矩阵数组
    int vertexCount, edgeCount;            // 顶点数量和边数量
} AdjMatrix;

AdjMatrix adjMatrix;  // 定义邻接矩阵
AdjList adjList;      // 定义邻接表
bool visited[MAX_VERTICES]; // 记录顶点是否被访问过

// 初始化图
void initializeGraph() {
    // 初始化邻接矩阵的顶点和边数量为0
    adjMatrix.vertexCount = adjMatrix.edgeCount = 0;
    // 初始化邻接表的顶点和边数量为0
    adjList.vertexCount = adjList.edgeCount = 0;
}

// 创建邻接矩阵
void createAdjMatrix() {
    int i, j, edges, v1, v2;
    printf("\t\t\t输入顶点数量和边的数量: ");
    scanf("%d %d", &adjMatrix.vertexCount, &edges);
    adjMatrix.edgeCount = edges;

    // 初始化邻接矩阵所有元素为0
    for (i = 0; i < adjMatrix.vertexCount; i++) {
        for (j = 0; j < adjMatrix.vertexCount; j++) {
            adjMatrix.matrix[i][j] = 0;
        }
    }

    // 输入每条边的两个顶点
    printf("\t\t\t输入每条边的两个顶点(从0开始 空格分隔):");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &v1, &v2);
        // 设置边对应的值为1
        adjMatrix.matrix[v1][v2] = 1;
        adjMatrix.matrix[v2][v1] = 1; // 无向图对称设置
    }
}

// 创建邻接表
void createAdjList() {
    int i, edges, v1, v2;
    printf("\t\t\t输入顶点数量和边的数量: ");
    scanf("%d %d", &adjList.vertexCount, &edges);
    adjList.edgeCount = edges;

    // 初始化邻接表顶点节点
    for (i = 0; i < adjList.vertexCount; i++) {
        adjList.vertices[i].data = i;        // 顶点编号
        adjList.vertices[i].firstEdge = NULL; // 初始化第一个邻接点为NULL
    }

    // 输入每条边
    printf("\t\t\t输入每条边的两个顶点(从0开始编号):");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &v1, &v2);

        // 插入边 v1->v2
        EdgeNode *newNode = (EdgeNode *)malloc(sizeof(EdgeNode));
        newNode->vertex = v2;                     // 设置目标顶点
        newNode->next = adjList.vertices[v1].firstEdge; // 插入到链表头部
        adjList.vertices[v1].firstEdge = newNode;       // 更新链表头指针

        // 插入边 v2->v1 (无向图)
        newNode = (EdgeNode *)malloc(sizeof(EdgeNode));
        newNode->vertex = v1;
        newNode->next = adjList.vertices[v2].firstEdge;
        adjList.vertices[v2].firstEdge = newNode;
    }
}

// 深度优先遍历（DFS）
void DFS(int v) {
    visited[v] = true; // 标记当前顶点已访问
    printf("%d ", v);  // 打印当前顶点

    // 遍历邻接矩阵，寻找下一个未访问的邻接点
    for (int i = 0; i < adjMatrix.vertexCount; i++) {
        if (adjMatrix.matrix[v][i] && !visited[i]) {
            DFS(i); // 递归访问下一个顶点
        }
    }
}

// 广度优先遍历（BFS）
void BFS(int start) {
    int queue[MAX_VERTICES], front = 0, rear = 0; // 定义队列
    visited[start] = true;      // 标记起点已访问
    queue[rear++] = start;      // 起点入队

    while (front < rear) {      // 当队列不为空时
        int v = queue[front++]; // 出队一个顶点
        printf("%d ", v);       // 打印顶点

        // 遍历邻接矩阵，寻找未访问的邻接点
        for (int i = 0; i < adjMatrix.vertexCount; i++) {
            if (adjMatrix.matrix[v][i] && !visited[i]) {
                visited[i] = true; // 标记为已访问
                queue[rear++] = i; // 入队
            }
        }
    }
}

// 显示邻接矩阵
void displayAdjMatrix() {
    printf("\t\t\t邻接矩阵:\n");
    for (int i = 0; i < adjMatrix.vertexCount; i++) {
        printf("\t\t\t");
        for (int j = 0; j < adjMatrix.vertexCount; j++) {
            printf("%d ", adjMatrix.matrix[i][j]); // 打印矩阵元素
        }
        printf("\n");
    }
}

// 显示邻接表
void displayAdjList() {
    printf("\t\t\t邻接表:\n");
    for (int i = 0; i < adjList.vertexCount; i++) {
        printf("\t\t\t");
        printf("%d -> ", adjList.vertices[i].data); // 打印顶点编号
        EdgeNode *edge = adjList.vertices[i].firstEdge;
        while (edge) {
            printf("%d ", edge->vertex); // 打印邻接点
            edge = edge->next;
        }
        printf("\n");
    }
}

// 主菜单
void menu() {
    int choice, start;
    while (1) {
        // 打印菜单
        printf("\n\t\t\t *=====计算机2337班第四组=====*\n");
        printf("\t\t\t*     1. 建立邻接矩阵        *\n");
        printf("\t\t\t*     2. 建立邻接表          *\n");
        printf("\t\t\t*     3. 显示邻接矩阵        *\n");
        printf("\t\t\t*     4. 显示邻接表          *\n");
        printf("\t\t\t*     5. 深度优先遍历(DFS)   *\n");
        printf("\t\t\t*     6. 广度优先遍历(BFS)   *\n");
        printf("\t\t\t*     7. 退出                *\n");
        printf("\t\t\t *============================*\n\n");        
        printf("\t\t\t*选择操作:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAdjMatrix(); // 调用邻接矩阵创建函数
                break;
            case 2:
                createAdjList(); // 调用邻接表创建函数
                break;
            case 3:
                displayAdjMatrix(); // 调用显示邻接矩阵函数
                break;
            case 4:
                displayAdjList(); // 调用显示邻接表函数
                break;
            case 5:
                printf("\t\t\t输入起始顶点: ");
                scanf("%d", &start);
                for (int i = 0; i < MAX_VERTICES; i++) visited[i] = false; // 初始化访问数组
                DFS(start); // 调用深度优先遍历函数
                printf("\n");
                break;
            case 6:
                printf("\t\t\t输入起始顶点: ");
                scanf("%d", &start);
                for (int i = 0; i < MAX_VERTICES; i++) visited[i] = false; // 初始化访问数组
                BFS(start); // 调用广度优先遍历函数
                printf("\n");
                break;
            case 7:
                printf("\t\t\t退出程序。\n");
                exit(0); // 退出程序
            default:
                printf("\t\t\t无效选项！\n");
        }
        system("pause");  // 暂停程序，等待用户按任意键
        system("cls");  // 清屏
    }
}

// 主函数
int main() {
    initializeGraph(); // 初始化图
    menu();            // 调用主菜单
    return 0;          // 程序结束
}
