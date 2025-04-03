//线性表 链式存储结构
#include <stdio.h>
#include <stdlib.h>

const int Maxlength = 10;
typedef int Elemtype;

//创建结点类型
typedef struct LNode{
    Elemtype data;
    struct LNode * next;
}LNode;

int InitList(LNode *L);

//主函数
int main(){
    LNode * L;
    printf("%d\n",(int)InitList(L));
}

//初始化一个链表
int InitList(LNode *L){
    L = NULL;
    return 1;
}