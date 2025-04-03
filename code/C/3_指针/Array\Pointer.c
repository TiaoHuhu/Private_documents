#include <stdio.h>
#define MAX 5

//指针数组(数组:存放指针的数组) 数组指针（指针：指向数组的指针）
int main(){
    //指针数组
    int arr[MAX] = {0};
    printf ("%p \n" ,arr); //arr是地址 首元素地址
    printf ("%p \n" ,arr+1);
    printf ("%p \n" ,&arr[0]);
    printf ("%p \n" ,&arr[0 + 1]);
    printf ("%p \n" ,&arr);
    printf ("%p \n" ,&arr + 1); //与上 差20Byte
    //以上都代表首元素地址 区别是&arr整个数组 只是打印还是首地址
    //sizeof(arr) 以及 &arr 在这里数组名代表的都是 整个数组

    //数组指针
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    short count = 0;

    int* arrP[MAX] = {&a ,&b ,&c ,&d ,&e};
    while(count < MAX){
        printf("%d " ,*arrP[count]);
        count ++;
    }printf("\n");

    return 0;
}