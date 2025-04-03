//线性表 链式存储结构 带头节点
#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;

//定义结点类型
typedef struct LNode{
    Elemtype data;
    struct LNode * next;
}LNode, *LinkList;

//函数声明
int InitList(LinkList L);


int main(){
    LinkList L;
    InitList(L);

}

//初始化线性表 链式存储结构 （带头节点）
int InitList(LinkList L){
    L = (LNode *)malloc(sizeof (LNode));
    L -> next = NULL;

    if (L == NULL)    return -1;
    L ->next =NULL;
    return 1;
}