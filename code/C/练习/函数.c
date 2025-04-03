#include <stdio.h>

int Add(int x,int y){
    int Temp=0;
    Temp =x +y;
    return Temp;
}

int main(){
    int n1= 0;
    int n2= 0;
    //输入
    scanf ("%d %d",&n1 ,&n2);
    
    //求和
    //int Sum =n1 +n2;
    int Sum =Add(n1,n2);

    //打印
    printf ("%d",Sum);

    return 0;
}

// #define _CRT_SECURE_ON_WARNINGS
// //函数
// #include <stdio.h>

// int sum(int x,int y){
//     return x+y;
// }

// int main(){
//     int num1 = 10;
//     int num2 = 30;
//     int Add = sum(num1,num2);
//     printf ("%d\n",Add);
//     printf ("%d\n",sum(20,50));

//     return 0;
// }