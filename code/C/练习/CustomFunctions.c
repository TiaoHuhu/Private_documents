#include <stdio.h>

//函数 自定义函数
//函数要具有1.返回类型 2.函数名 3.参数
int get_max(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    int a = 10;
    int b = 20;
    int max = get_max(a,b);
    printf("%d\n",max);

    return 0;
}