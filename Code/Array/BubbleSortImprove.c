#include <stdio.h>
//Bubble sort improve 冒泡排序改进
void ArrPrintf(int Arr[] ,int sz){
    int count = 0;
    while(count < sz){
        printf("%d" ,Arr[count]);
        count++;
    }printf("\n");
}

void SortArr(int Arr[] ,int sz){
    for(int i = sz-1 ;i > 0 ;i--){
        int flag = 1;   //improve
        for(int j = 0 ;j < i;j++){
            printf("%d " ,j);
            if(Arr[j] > Arr[j+1]){
                int Temp = Arr[j +1];
                Arr[j + 1] = Arr[j];
                Arr[j] = Temp;
                flag = 0;   //improve
            }
        }printf("\n");
        if(flag == 1) break;    //improve
    }
    ArrPrintf(Arr ,sz);
}

int main(){
    int arr[] = {0,1,2,3,4,5,7,6,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    SortArr(arr ,sz);

    return 0;
}

//改进的基础思路：在外层循环 存在一次不交换就证明 不用在进行计算