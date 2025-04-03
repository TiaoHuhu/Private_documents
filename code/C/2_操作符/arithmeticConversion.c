#include <stdio.h>
//算数转换就是 在表达式有多的类型时 运算过程中先转为最大的类型

int main(){
    int a = 0;
    short b = 1;
    int c = a + b;  //在此b short转为int在计算

    return 0;
}