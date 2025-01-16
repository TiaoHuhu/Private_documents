#include <stdio.h>

int main(){
    //创建
    int arr[3][4];
    //初始化
    int arr2[2][2] = {{9,0},{1,2}};

    int n = 0;
    int sz = sizeof(arr2)/sizeof(arr2[0][0]);
    printf("%d\n",sz);

    while (n++ < sz){
        printf("%d ",arr2++);
    }
    return 0;
}