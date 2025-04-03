#define _CRT_SECURE_ON_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    //结点类型定义
    int data;
    struct Node * next;
}Lnode,* Linklist;

//声明
Linklist InitLinklist();
void EnterNewNode(Linklist ll);

int main(){
    //主函数
    Linklist LL = InitLinklist();       //printf ("%d " ,LL ->data); 测试初始化是否成功
    void EnterNewNode(LL);

    return 0;
}

Linklist InitLinklist(){
    //初始化链表
    Lnode * ll;
    ll = malloc (sizeof(Lnode));
    if (ll != NULL){
        ll ->data = 0;
        ll ->next = NULL;
        return ll;
    }
    else{
        printf ("初始化链表错误！");
        return NULL;
    }
}

void AddLinklist(Linklist ll,int Temp){
    //添加新结点
    Lnode * pMove = ll;
    Lnode * pTemp = (Lnode *) malloc (sizeof (Lnode));
    while(pMove == NULL){
        pMove ++;
        printf ("%d \n",pMove ->data);
    }
    pMove ->data = Temp;
    pMove ->next = pTemp;
    free(ll);


}//AddLinklist 尾插

void EnterNewNode(Linklist ll){
    //循环输入新结点
    int Temp;
    printf ("please enter new data");
    while (scanf("%d" ,&Temp) != 0){
        AddLinklist(ll,Temp);
    }
}

//这是什么问题？a parameter list without types is only allowed in a function definition