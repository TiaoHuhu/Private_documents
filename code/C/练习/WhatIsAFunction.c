#include <stdio.h>
//函数 函数是什么

int add(int a, int b){
    return a+b;
}

int main(){
    int a = 10;
    int b = 20;
    int sum = add(a,b);
    printf("%d\n", sum);
    return 0;
}