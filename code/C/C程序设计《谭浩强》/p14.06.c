//编写一个输入a,b,c三个值 输出其中最大者
#include <stdio.h>

int function(int a,int b,int c){
    //暴力解法
    if(a > b && a > c) return a;
    if(b > a && b > c) return b;
    if(c > a && c > b) return c;
    else return 0;
}

//冒泡排序

//etc

int main(){
    int a ,b ,c;
    scanf("%d %d %d",&a ,&b ,&c);   //输入

    printf("%d\n",function(a,b,c));


    return 0;
}