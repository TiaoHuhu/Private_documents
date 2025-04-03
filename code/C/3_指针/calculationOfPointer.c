#include <stdio.h>
#define MAX 5
//指针运算

// //数组的初始化
// void initializeArray(int** arr,short size){
//     int count = 0;
//     while(count < size){
//         printf("%d " ,*(*arr + count));
//         count ++;
//     }
// }

int main(){
    int arr[MAX] = {0};
    int* p1,* p2;
    p1 = &arr[0];
    p2 = &arr[3];

    //指针初始化
    int count = 0;
    while(count < MAX){
        arr[0 + count] = count;
        count ++;
    }

    //打印
    count = 0;
    while(count < MAX){
        printf("%d " ,arr[0] + count);
        count ++;
    }printf("\n");

    //+/— 整数
    count = p2 - p1;
    while(count != 0){
        printf("%d " ,*(p1+count)); //printf 括号内的运算 是临时的 不存储   
        count --;
    }printf("\n");

    //+/- 指针
    //如上count


    //指针的关系运算
    if(p1 < p2){
        printf("ok");
    }else{
        printf("no");
    }

    return 0;
}