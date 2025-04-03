#include <stdio.h>
#include <stdlib.h>
//测试双重指针 访问成员操作
typedef struct node{
    int data;
    struct node * next;
}node ,* linklist;

void test(linklist * list);

int main(){
    linklist list = (node *) malloc (sizeof(node));
    list ->data =999;
    test (&list);
}

void test(linklist * list){
    printf ("%d ",(*list) ->data);
}

//”*“ 操作符 优先级低于 “->"        ！！！！！！！！！