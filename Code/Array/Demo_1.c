#include <stdio.h>

void Printf(int * Arr ,int sz){
    while(sz > 0){
        printf("%d ",Arr[sz-1]);
        sz--;
    }printf("\n");
}

int main(){
    int arr[] = {0,1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);

    Printf(arr ,sz);

    return 0;
}