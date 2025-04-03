//数组 数组的下标从0开始

#include <stdio.h>
// void circulate(*Arr,){
//     //输入
//     for (int i=0 ;i<10 ;i++ ){
//         scanf ("%d",&Arr[i]);
//     }
//     //输出
//     for (int i=0 ;i<10 ;i++ ){
//         scanf ("%d",&Arr[i]);
//     }
// }

int main(){
    int Arr[10] ={0};
    // circulate(&Arr);
    for (int i=0 ;i<2 ;i++){
        scanf ("%d" ,&Arr[i]);
    }
    for (int i=0 ;i<2 ;i++){
        printf ("%d \n" ,Arr[i]);
    }
} 