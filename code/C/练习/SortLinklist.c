#define _CRT_SECURE_ON_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    //结点类型定义
    int data;
    struct Node * next;
}Lnode,* Linklist;

//声明
bool IsEmpty(Linklist list);
void AddLinklist(Linklist * list);
void PrintfLinklist(Linklist list);
void SortLinklist(Linklist * list);

int main(){
    //主函数
    Linklist list = NULL;
    AddLinklist(&list);
    PrintfLinklist(list);

    SortLinklist(&list);
    PrintfLinklist(list);

    return 0;
}

bool IsEmpty(Linklist list){
    //判空
    if (list == NULL)
        return true;
    else return false;
}//空返回 true 非空 false

void PrintfLinklist(Linklist list){
    //遍历输出
    while (list){
        printf("%d ",list ->data);
        list = list ->next;
    }printf ("\n");
}

void AddLinklist(Linklist * list){
    //添加结点
    //添加结点需要判断为空吗？

    int value = 0;
    printf ("please enter new data:");
    while(scanf ("%d", &value) == 1){ //!!!!!!一定记住输入 要加取地址符 & 一直没没找到这个问题 找了两天
        //if (IsEmpty(list) == true)    //想加判空操作 但好像不影响
        Lnode * newNode = (Lnode *) malloc (sizeof(Lnode));
        newNode ->data =value;
        newNode ->next =*list;
        *list = newNode;
    }
}//首插法

void SortLinklist(Linklist * list){
    //冒泡排序
    Lnode * pLeft,* pRight,* tail,* temp;  //tail 用于循环的判断 外层
    if(*list == NULL || (*list) ->next ==NULL) {printf("if退");    return;} //一个结点 或 空则中断
    
    tail = *list;
    while (tail){
        tail = tail ->next;
    }//tail 指向尾部

    pLeft = *list;   pRight = (*list) ->next;   temp = NULL;
    Lnode * present = *list; //移动指针 做头指针的链接 第一次后启动
    while (pRight != tail){
        while(pRight != tail){
            if (pLeft ->data > pRight ->data){
                pLeft ->next = pLeft ->next ->next;     //交换指针指向的地址
                pRight ->next = pLeft;
                (*list == pLeft) ? (*list = pRight) : (present ->next = pRight);

                temp = pLeft;       //解决指针互换 含义改变问题
                pLeft = pRight;
                pRight = temp;
            }
            if(*list == pLeft) present = present ->next;       //指针后移 更新
            pLeft = pLeft ->next;
            pRight = pRight ->next;
        }
        //归位
        tail = pLeft;   //tail左移
        pLeft = *list;   pRight = (*list) ->next;   present = *list;
    }
}//SortLinklist
