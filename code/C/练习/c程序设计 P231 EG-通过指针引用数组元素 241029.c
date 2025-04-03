#define _CRT_SECURE_ON_WARNINGS
//通过指针引用数组
//c程序设计 P231 EG:通过指针引用数组元素 241029

// //下标法
// #include <stdio.h>

// int main(){
//     int a[]={1,2,3,4,5,6,7,8,9,10};

//     int Count = 0;
//     while(Count<10){
//         printf("%d ",a[Count]);
//         Count ++;
//     }
//     printf("\n");

//     return 0;
// }

// //指针法
// #include <stdio.h>

// int main(){
//     int a[]={1,2,3,4,5,6,7,8,9,10};

//     int Count = 0;
//     while(Count <10){
//         printf("%d ", *(a+Count));
//         Count++;
//     }
//     printf("\n");
// }

//用指针变量指向数组元素
#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int * P = a;

    int Count = 0;
    while(Count < 10){
        printf("%d ",*(P++));
        Count++;
    }
    printf("\n");
    return 0;
}

//最后的方法最快 前两个方法都是将数组名计算成地址后找到对应元素
//而第三种方法 是指针变量直接直接指向元素 不必每次重新计算地址。。。
//但第一种方法的好处就是 比较直观反应出是第几个元素
//！！！注意！！！ 指针变量的当前值 一定不要弄错了

// //输入可以使用指针输入多个值
// int Count = 0;
// while(Count < 10){
//     scanf("%d",p++);
// }

//但改用指针方法输入会有一个人注意的点 在输入完后指针不会自己归位 就会导致
//引用时出现读取数据不匹配的问题
//错误复现在c程序设计 P233 EG:8.7 241029 