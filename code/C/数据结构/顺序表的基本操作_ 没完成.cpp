//顺序表的基本操作-插入,删除
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10

//创建一个顺序表
typedef struct SqList{
    int data[MaxSize];
    int length;
}SqList;

void ListInsert(SqList *L, int i, int e){
    for(int j=L->length; j>=i; j--){
        L->data[j]=L->data[j-1];
    }//将第i个元素后面的元素后移
    L->data[i-1]=e;
    L->length++;
}

// //初始化顺序表
// int InitList(SqList *L){
    
// }

int mian(){
    SqList *L;
    //InitList(L);

    //插入几个元素

    ListInsert(L, 3, 3);
    return 0;
}