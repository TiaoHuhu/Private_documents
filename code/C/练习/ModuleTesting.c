//测试间接访问 在函数空返回 的解决形参不可带回函数的 问题
#define _CRT_SECURE_ON_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void function(int * temp);

int main(){
    int temp = 999;
    function(&temp);
    printf ("%d ",temp);
}

void function(int * temp){
    //printf ("%d ",temp);
    printf ("%d ",*temp = 888);
}