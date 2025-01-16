#include <stdio.h>
#include <string.h>

int main(){
    int arr[10] = {9,1,3,2,4,6,5,8,7};
    char Carr[100] = "Nihao!";

    printf("%d ",strlen(Carr));    printf("%d\n",sizeof(Carr));
    printf("%d ",strlen(Carr));    printf("%d\n",sizeof(arr));
    //SortArr(arr);

    return 0;
}

//分清楚 sizeof strlen的作用