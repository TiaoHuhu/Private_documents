#include <stdio.h>
#include <string.h>
#include "add.h"
//函数的定义

int main(){
    int a = 10;
    int b = 20;
    int sum = 0;
    //函数的调用
    sum = Add(a,b);
    printf ("%d\n",sum);

    return 0;
}

//函数声明和定义不是这么玩的 是在一个源文件下写一个.c文件中后引入 #include ""
//还有一个形式 是#include <...>