//线性表 链式存储结构
#include <stdio.h>
#include <stdlib.h>

const int Maxlength = 10;
typedef int Elemtype;

//创建结点类型
typedef struct LNode{
    Elemtype data;
    struct LNode * next;
}LNode,*LinkList;   //LinkList是一个指向struct LNode的指针

//int InitList(LNode *L);
int InitList(LinkList);

//主函数
int main(){
    //LNode * L;
    LinkList L;
    //printf("%d\n",(int)InitList(L));
    printf("%d\n",(int)InitList(L));
}

//初始化一个链表
int InitList(LinkList L){
    L = NULL;   //NULL说明没有结点
    return 1;
}