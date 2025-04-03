#include <stdio.h>
#include <string.h>

void Test(int * Arr){
    //int sz = sizeof(Arr)/sizeof(Arr[0]); 
    printf ("%d\n",(int)strlen(Arr));
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf ("%d\n",(int)strlen(arr));
    Test(arr);

    return 0;
}