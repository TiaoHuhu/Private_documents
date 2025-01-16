#include <stdio.h>
#include <string.h>
//Bubble Sort 冒泡排序
void ArrPrintf(int Arr[] ,int sz){
    int count = 0;
    while(count < sz){
        printf("%d" ,Arr[count]);
        count++;
    }printf("\n");
}

void SortArr(int Arr[] ,int sz){
    for(int i = sz-1 ;i > 0 ;i--){
        for(int j = 0 ;j < i;j++){
            //printf("%d " ,j);
            if(Arr[j] < Arr[j+1]){
                int Temp = Arr[j +1];
                Arr[j + 1] = Arr[j];
                Arr[j] = Temp;
            }
        }//printf("\n");
    }
    ArrPrintf(Arr ,sz);
}

int main(){
    int arr[] = {9,1,3,2,4,6,5,8,7};
    int sz = sizeof(arr)/sizeof(arr[0]);

    SortArr(arr,sz);

    return 0;
}

//形式参数不能直接用sizeof(单位：Byte 字节)计算整个数组所占空间的原因
//关系到 数组名在各情况 所代表的意思 
//1.sizeof（数组名） 在此的意思是 整个数组
//2.&数组名 这的意思是数组的地址 数组的地址和数组首元素的地址一样但意义不一样
//以上数组名都不表示数组首元素地址"arr[0]" 有除此的意义 