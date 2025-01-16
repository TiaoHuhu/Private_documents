#include <stdio.h>
#include <string.h>

// //一维数组的使用
// int main(){
//     char arr[] = "abcdef";
//     int i = 0;
//     int len = strlen(arr);
//     for (i = 0 ;i < len ;i++){
//         printf("%c " ,arr[i]);
//     }
//     return 0;
// }

//数组是使用下标 来访问 下标从0开始
//数组的大小 可以通过计算的来 sizeof（arr）/sizeof（arr[0]）;   但sizeof在实参传形参会有问题

int main(){
    int arr[] = {0,1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(i = 0 ;i < sz ;i++){
        printf("%p ",&arr[i]);
    }
    return 0;
}
//由输出结果可知 数组是连续请求内存空间 （连续存放） 下标：0->n 地址：低->高