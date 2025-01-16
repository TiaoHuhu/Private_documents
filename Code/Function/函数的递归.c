#include <stdio.h>
//函数的递归 程序调用自己的编程技巧 递归若无止尽 则可能出现其中一个问题 
//stack overflow -> 栈溢出
//内存 包含三个区域 栈 堆 静态
//栈区 存放 局部变量 函数形参
//堆区     动态开辟的内存 malloc calloc
//静态区   static修饰的变量 全局变量

//EG：接收一个无符号整形数 输入1234 打印4321
void print(int n){
    if(n > 9){  //递归的条件 *** 重要
        print(n/10);
    }printf("%d ",n%10);
}

int main(){
    unsigned int num = 0;
    scanf("%d",&num);
    //递归
    print(num);
    //print(1234)
    //print(123) 4
    //print(12) 3 4
    //print(1) 2 3 4
    return 0;
}

//递归两个必要条件
//递归的限制条件
//越来越逼近限制条件

//函数递归的经典问题
//1.汉诺塔问题
//2.青蛙跳台阶问题
//可用于研究递归