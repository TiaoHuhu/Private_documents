#include <stdio.h>
//基础
int main(){
    //1.
    printf("%d\n" ,sizeof(char*)); //64位平台 所以结果位8

    //2.指针类型
    //指针类型 存在的意义：在本文件夹的图中
    //指针类型决定 指针解引用操作时 能访问的空间大小
    //char* p  p可访问一个字节
    //int* p   p可访问四个字节
    //double* p p可访问八个字节

    //3.指针的算数运算
    int a = 0x123456;
    int *pi = &a;
    char *pc = &a;
    printf ("%p %p\n" ,pi ,pc);
    printf ("%p %p\n" ,pi + 1 ,pc +1);
    printf ("%p %p\n" ,pi - 1 ,pc -1);
    //int* 的指针加 1 就是二进制加4位
    //char* 的指针加 1 就是二进制加1位
    //double* 的指针加 1 就是二进制加8位

    //4.指针运算 4.1 +/-整数 4.2 +/—指针 4.3 指针的关系运算
    //指针减去指针 得出两指针中间元素的个数
    int arr[10] = {0};
    int* pI = arr;
    int count = 0;
    while (count < 10){
        *(pI + count) = 1;
        printf("%d " ,*(pI+count));
        count ++;
    }
    return 0;
    //如若将int* 类型改为char* 可否成功 --- no
    // char* pC = arr;
    // while (count < 10){
    //     *(pC + count) = 1;
    //     printf("%d " ,*(pC+count));
    //     count ++;
    // }
    //只能改两个半

    //5.野指针
    //5.1 指针未初始化  可以 int* p = BULL
    int* P; //若不给初值 就赋给随机值
    //随意的地址不能用 万一指到有用的东西删除了怎么办
    
    //5.2 指针越界  注意就好
    //内存越界 也会导致野指针 EG数组有十个空间但访问超出10指向数组的指针就会成为野指针
    // int arr[5] = {0};
    // int count = 0;
    // while (count < 8){
    //     ......
    // }

    //5.3 指针指向的空间释放  指针的释放，且需要指针存在就指向NULL
    // int* test(){
    //     int a = 10;
    //     return &a;
    // }
    // int main(){
    //     int* p = test();
    //     return 0;
    // }
    //由于调用函数被销毁 是临时的
    
}

//what is a pointer?
//指针就是变量 指针是用来存储地址的变量
//地址是唯一标识一块地址空间的 32位机器 指针占4Byte 64位机器 指针占8Byte