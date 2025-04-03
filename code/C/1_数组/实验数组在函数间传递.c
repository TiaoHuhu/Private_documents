#include <stdio.h>
#define MAX 5
//实验数组在函数间传递

void arrayInitialize(int* arr){
    short count = 0;
    while (count < MAX){
        arr[count] = count;
        count ++;
    }
    arr[MAX -1] = 100;
}

void arrayPrint(int* arr){
    arr[MAX] = 90;
    short count = 0;
    while (count < MAX+1){
        printf("%d ",arr[count]);
        count ++;
    }printf("\n");
}

int main(){
    int arr[MAX] = {0};
    arrayInitialize(arr);
    arrayPrint(arr);

    return 0;
}