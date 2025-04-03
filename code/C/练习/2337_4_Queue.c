#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100 // 循环队列的最大容量

// 循环队列定义
typedef struct {
    int data[MAXSIZE];
    int front;
    int rear;
} CircularQueue;

// 链队列结点定义
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 链队列定义
typedef struct {
    Node *front;
    Node *rear;
} LinkQueue;

// 初始化循环队列
void InitCircularQueue(CircularQueue *q) {
    q->front = q->rear = 0;
}

// 判断循环队列是否为空
bool IsCircularQueueEmpty(CircularQueue *q) {
    return q->front == q->rear;
}

// 循环队列入队
bool EnCircularQueue(CircularQueue *q, int elem) {
    if ((q->rear + 1) % MAXSIZE == q->front) {
        printf("\t\t\t循环队列已满！\n");
        return false;
    }
    q->data[q->rear] = elem;
    q->rear = (q->rear + 1) % MAXSIZE;
    return true;
}

// 循环队列出队
bool DeCircularQueue(CircularQueue *q, int *elem) {
    if (IsCircularQueueEmpty(q)) {
        printf("\t\t\t循环队列为空！\n");
        return false;
    }
    *elem = q->data[q->front];
    q->front = (q->front + 1) % MAXSIZE;
    return true;
}

// 获取循环队列队头元素
bool GetCircularQueueFront(CircularQueue *q, int *elem) {
    if (IsCircularQueueEmpty(q)) {
        printf("\t\t\t循环队列为空！\n");
        return false;
    }
    *elem = q->data[q->front];
    return true;
}

// 销毁循环队列
void DestroyCircularQueue(CircularQueue *q) {
    q->front = q->rear = 0;
    printf("\t\t\t循环队列已销毁！\n");
}

// 初始化链队列
void InitLinkQueue(LinkQueue *q) {
    q->front = q->rear = (Node *)malloc(sizeof(Node));
    if (!q->front) {
        printf("\t\t\t内存分配失败！\n");
        exit(1);
    }
    q->front->next = NULL;
}

// 判断链队列是否为空
bool IsLinkQueueEmpty(LinkQueue *q) {
    return q->front == q->rear;
}

// 链队列入队
bool EnLinkQueue(LinkQueue *q, int elem) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        printf("\t\t\t内存分配失败！\n");
        return false;
    }
    newNode->data = elem;
    newNode->next = NULL;
    q->rear->next = newNode;
    q->rear = newNode;
    return true;
}

// 链队列出队
bool DeLinkQueue(LinkQueue *q, int *elem) {
    if (IsLinkQueueEmpty(q)) {
        printf("\t\t\t链队列为空！\n");
        return false;
    }
    Node *temp = q->front->next;
    *elem = temp->data;
    q->front->next = temp->next;
    if (q->rear == temp) {
        q->rear = q->front;
    }
    free(temp);
    return true;
}

// 获取链队列队头元素
bool GetLinkQueueFront(LinkQueue *q, int *elem) {
    if (IsLinkQueueEmpty(q)) {
        printf("\t\t\t链队列为空！\n");
        return false;
    }
    *elem = q->front->next->data;
    return true;
}

// 销毁链队列
void DestroyLinkQueue(LinkQueue *q) {
    while (q->front) {
        Node *temp = q->front;
        q->front = q->front->next;
        free(temp);
    }
    q->rear = NULL;
    printf("\t\t\t链队列已销毁！\n");
}

// 界面显示
void Interface() {
    printf("\n\t\t\t*=====计算机2337班第四组=====*\n");
    printf("\t\t\t*          0.退出            *\n");
    printf("\t\t\t*          1.初始化队列      *\n");	 
    printf("\t\t\t*          2.判空            *\n");
    printf("\t\t\t*          3.入队            *\n");
    printf("\t\t\t*          4.出队            *\n");
    printf("\t\t\t*          5.取队头          *\n");	
    printf("\t\t\t*          6.销毁队列        *\n");	
    printf("\t\t\t*============================*\n\n");
}

// 主函数
int main() {
    CircularQueue cq;
    LinkQueue lq;
    int choice, elem, queueType;
    bool isCircularQueue = true;

    printf("\t\t\t请选择队列类型（1.循环队列 2.链队列）：");
    scanf("%d", &queueType);
    if (queueType == 2) {
        isCircularQueue = false;
    }

    Interface();
    while (true) {
        printf("\t\t\t请输入您的选择: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("\t\t\t退出程序！\n");
                return 0;
            case 1:
                if (isCircularQueue) {
                    InitCircularQueue(&cq);
                } else {
                    InitLinkQueue(&lq);
                }
                printf("\t\t\t队列已初始化！\n");
                break;
            case 2:
                if (isCircularQueue) {
                    printf("\t\t\t队列是否为空: %s\n", IsCircularQueueEmpty(&cq) ? "是" : "否");
                } else {
                    printf("\t\t\t队列是否为空: %s\n", IsLinkQueueEmpty(&lq) ? "是" : "否");
                }
                break;
            case 3:
                printf("\t\t\t输入数据（非数字结束）：");
                while (scanf("%d", &elem)) {
                    if (isCircularQueue) {
                        if (!EnCircularQueue(&cq, elem)) break;
                    } else {
                        if (!EnLinkQueue(&lq, elem)) break;
                    }
                }
                while (getchar() != '\n'); // 清除缓冲区
                printf("\t\t\t入队完成！\n");
                break;
            case 4:
                if (isCircularQueue) {
                    if (DeCircularQueue(&cq, &elem)) {
                        printf("\t\t\t出队元素: %d\n", elem);
                    }
                } else {
                    if (DeLinkQueue(&lq, &elem)) {
                        printf("\t\t\t出队元素: %d\n", elem);
                    }
                }
                break;
            case 5:
                if (isCircularQueue) {
                    if (GetCircularQueueFront(&cq, &elem)) {
                        printf("\t\t\t队头元素: %d\n", elem);
                    }
                } else {
                    if (GetLinkQueueFront(&lq, &elem)) {
                        printf("\t\t\t队头元素: %d\n", elem);
                    }
                }
                break;
            case 6:
                if (isCircularQueue) {
                    DestroyCircularQueue(&cq);
                } else {
                    DestroyLinkQueue(&lq);
                }
                break;
            default:
                printf("\t\t\t无效选择！\n");
        }
        system("pause");
        system("cls");
    }
}