#include <stdio.h>

void Test(int * Arr){
    int sz = sizeof(*Arr)/sizeof(++(*Arr));
    printf ("%d",sz);
    //printf("%d", *Arr);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Test(arr);

    return 0;
}

//对于数组传递 存在问题
//数组由 实参传入形参 无法达到使用sizeof（arr）计算整个数组的所长空间
//还未解决