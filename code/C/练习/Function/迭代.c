#include <stdio.h>
//迭代

// //1.n的阶乘计算
// int Fac(int n){
//     if(n <= 1) return 1;
//     else return n*Fac(n-1);
// }

// int main(){
//     int n = 0;
//     scanf("%d" ,&n);
//     printf("%d\n",Fac(n));

//     return 0;
// }

//2.斐波那契数
int Fib(int n){
    if(n <= 2) return 1;
    else return Fib(n-1)+Fib(n-2);
}

int Fib2(int n){
    int a = 1 ,b = 1 ,c = 0;
    while((n--) >= 3){
        c = a + b;
        a = b;
        b = c;
    }return c;
    if (n == 1) return a;
    else if (n == 2) return b;
}

int main(){
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fib2(n);
    printf("ret = %d",ret);
    return 0;
}

//何时用递归 何时用循环 
//递归的问题在于栈溢出
//迭代 缺点时间复杂度大
//循环 