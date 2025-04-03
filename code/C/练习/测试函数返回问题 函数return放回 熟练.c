#define _CRT_SECURE_ON_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    //定义链表节点
    int data;
    struct Node *next;
}Node, *Linklist;

void PrintfLinklist(Linklist list);
Node * AddLinklist(Linklist list);

int main(){
    //测试函数返回问题
    Node * list = NULL;
    list = AddLinklist(list);
    PrintfLinklist(list);
}

void PrintfLinklist(Linklist list){
    //遍历输出
    while (list){
        printf("%d ",list ->data);
        list = list ->next;
    }printf("\n");
}

Node * AddLinklist(Linklist list){
    //添加结点
    //if (IsEmpty(list) == 1) return;

    Node * first = list;
    int value = 0;
    while(scanf ("%d", &value) == 1){
        Node * newNode = (Node *) malloc (sizeof(Node));
        newNode ->data =value;
        newNode ->next =first;
        first = newNode;
    }

    return first;
}//首插法

//函数 return 返回很熟练
