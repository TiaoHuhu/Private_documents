#include <stdio.h>
#include <string.h>s
//数组的创建 初始化
int main(){
    //创建存放10个整形的数组
    int arr[10];

    //int count = 10;
    //int arr[count];   不可以[]只能是常量

    //数组的初始化
    int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr3[10] = {0,1,2}; //不完全初始化 其余都为0
    int arr4[]  = {0,1,2,3,4};   //数组由{}内有几个数据 计算的到[]内的存储单元个数
    char arr5[] = "abcdef"; //7个存储单元 包含'\0'  但sizeof计算包含'\0' 而strlen不包含'\0'
    //sizeof是计算所占空间大小 而 strlen是求字符串长度，以'\0'结束
    //sizeof返回的无符号整型 是一个操作符号 strlen是库函数

    char arr6[] = "abc";
    char arr7[] = {'a','b','c'};
    printf ("%d \n",(int)sizeof(arr6));
    printf ("%d \n",(int)sizeof(arr7));
    printf ("%d \n",(int)strlen(arr6));
    printf ("%d \n",(int)strlen(arr7));
    return 0;
}