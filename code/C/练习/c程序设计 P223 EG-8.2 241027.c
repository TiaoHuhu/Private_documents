#define _CRT_SECURE_ON_WARNINGS
//c程序设计 P224 EG:8.3 241027

// #include <stdio.h>

//
// int main(){

//     //定义&声明
//     void Swap(int *,int *);
//     int Num1,Num2;
//     int *P1,*P2;    *P1,*P2=NULL;

//     printf("Please enter a and b:");
//     scanf("%d %d",&Num1,&Num2);
//     P1 = &Num1;
//     P2 = &Num2;

//     Swap(P1,P2);

// }


//c程序设计 P224 EG:8.3 241028

#include <stdio.h>

int main(){
    int a,b;
    int *pointer_a=NULL,*pointer_b=NULL;

    printf("Please enter two integer numbers:");
    scanf("%d %d",&a,&b);
    pointer_a = &a;
    pointer_b = &b;

    if(*pointer_a < *pointer_b){
        int *Temp;
        Temp = pointer_b;
        pointer_b = pointer_a;
        pointer_a = Temp;
    }

    printf("%d %d\n",a,b);
    printf("max=%d min=%d\n",*pointer_a,*pointer_b);
    return 0;
}
//运行结果变量的值不变 只改变指针指向的地址
