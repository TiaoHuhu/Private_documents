#include <stdio.h>

int main(){
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    printf("%d sizeof=%u,%d sizeof=%u\n",a,(int)sizeof(a),*a,sizeof(*a)); //0行起始地址 and 0行0列元素地址
    printf("%d sizeof=%u,%d sizeof=%u\n",a[0],sizeof(a[0]),*(a+0),sizeof(*(a+0)));  //0行0列元素地址
    printf("%d sizeof=  ,%d sizeof=  \n",&a[0],&a[0][0]);    //0行起始地址 and 0行0列元素地址

    printf("%d sizeof=%u,%d sizeof=%u\n",a[1],sizeof(a[1]),a+1,sizeof(*(a+1)));
    printf("%d sizeof=  ,%d sizeof=%u\n",&a[1][0],*(a+0)+0,sizeof(*(a+1)+0));

    return 0;
}

//24.11.4 早上起来写一个 表理一下思路 就是二维数组 的有关数据对应什么东西
//sizeof 是8的原因就是 sizeof测的是指针 解引用后就会是指针所对应数据的数据类型所占空间

//a 二维数组名（地址） 计算的所占空间是整体的所占空间
//  a+0 一个指针指向二维数组的一维数组（0行）
//      *a  一维数组（0行）的数组名（地址）
//          (*a)+0  一个指针指向一维数组的第一个元素的地址
//          ...
//              *(*(a)+0) 存储空间存储的元素
//              ...
//  a+1
//      *(a+1)
//          *(a+1)+0
//  a+2
//      *(a+2)
//          *(a+2)+0