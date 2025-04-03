#include <stdio.h>
//临时or测试
int main(){
    int arr[5];
    int *p1 ,*p2;
    p1 = & arr[1]; p2 = & arr[3];
    if(p1 > p2){
        printf("ok");
    }else{
        printf("no");
    }
    return 0;
}