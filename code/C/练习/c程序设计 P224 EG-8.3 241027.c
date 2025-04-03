#define _CRT_SECURE_ON_WARNINGS

// //c程序设计 P224 EG:8.3 241027

// #include <stdio.h>

// int main(){

//     //定义&声明
//     void Swap(int *,int *);
//     int Num1=1,Num2=2;
//     int *P1,*P2;    P1=P2=NULL;

//     printf("Please enter a and b:");
//     //scanf("%d %d",&Num1,&Num2);
//     P1 = &Num1;
//     P2 = &Num2;

//     Swap(P1,P2);
//     printf("%d %d\n",*P1,*P2);
//     return 0;
// }

// void Swap(int * p1,int * p2){
//     if(*p1<*p2){
//         int * Temp;
//         Temp = p1;
//         p1 = p2;
//         p2 = Temp;
//     }    
//     printf("%d %d\n",*p1,*p2);
// }

// //没法达到预期效果 又Swap的输出就可得知 在出函数时 P1以及P2到的指向会被还原到进入函数时的一样
// //最后导致输出不理想
// //指针在实参变量和形参变量之间的数据传输是单向的“值传递”方式 指针变量做函数参数也要遵循这个规律
// //指针在间接访问中可以打破着个规则 甚至可以传输多个变化的值 否则每个函数只能传输一个函数值

//c程序设计 P224 EG:8.3 241029
//使用指针的特性 间接访问的方式 完成所需效果

#include <stdio.h>

int main(){
    void Swap(int * p1,int * p2);
    int Num1,Num2;
    int * Pointer1, * Pointer2;

    printf("Please enter a and b:");
    scanf("%d %d",&Num1,&Num2);
    Pointer1 = &Num1;
    Pointer2 = &Num2;
    
    if(*Pointer1 < *Pointer2)
    Swap(Pointer1,Pointer2);
    printf("Max = %d Min = %d\n",*Pointer1,*Pointer2);
    return 0;

}

void Swap(int * p1,int * p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

//还有一个问题就是 书上说的 Swap函数 temp如果是指针就回出现破坏系统正常工作状态 就是temp
//未指向一个确定值 就会不可预见 导致赋值到有用数据 难道编译器有那么傻 会给有数据的给我用？
