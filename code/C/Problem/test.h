#include <stdio.h>
#define MAX 5

void arrayPrint(short* arr){
        short count = 0;
        while(count < MAX){
                printf("%d " ,arr[count]);
                count++;
        }printf("\n");
}

void arrayInitialize(short* arr){
        short count = 0;
        while(count < MAX){
                arr[count] = count;
                count++;
        }
        arrayPrint(arr);
}