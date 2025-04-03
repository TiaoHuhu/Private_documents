#define _CRT_SECURE_ON_WARNINGS
//常量
#include <stdio.h>

enum Sex{
    MALE,FEMALE,SECRET
};

int main(){
    //1.10 字面常量
    const int num = 4; //const 定义一个常变量
    //num = 10; //常变量不可改值
    printf ("%d\n",num);

    //2.const int n = 10; //常变量
    int Arr[10] = {0};
    //int arr[n] = {0}; //数组[]内应为一个常量表达式 就算const修饰但本质还是产变量

    //3.还有一个#define 定义的标识符常量

    //4.枚举常量 可以一一列举
    //枚举关键字 enum
    printf ("%d\n",MALE);
    printf ("%d\n",FEMALE);    
    printf ("%d\n",SECRET);
    enum Sex sex = MALE;
    printf ("%d\n",sex); 

    return 0;
}