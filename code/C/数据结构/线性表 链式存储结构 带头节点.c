//线性表 链式存储结构 带头节点
#include <stdio.h>
#include <stdlib.h>

const int Maxlength = 10;
typedef int Elemtype;

//创建结点类型 应该叫定义 定义结点类型
typedef struct LNode{
    Elemtype data;
    struct LNode * next;
}LNode,*LinkList;   //LinkList是一个指向struct LNode的指针

int InitList(LinkList);

//主函数
int main(){
    LinkList L;
    printf("%d\n",(int)InitList(L));
}

//初始化一个链表（带头节点）
int InitList(LinkList L){
    L = (LNode *)malloc(sizeof (LNode));
    if (L==NULL)    return -1;
    L ->next =NULL;
    return 1;
}

//判断单链表是否为空（带头结点）
int Empty(LinkList L){
    if(L->next == NULL) return 1;
    else return 0;
}