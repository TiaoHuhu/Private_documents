#include <stdio.h>
//双重指针
int main(){
    int a = 10;
    int* pa = &a;
    int** ppa = pa;
    printf("%p " ,pa);
    printf("%p \n" ,*ppa);

    return 0;
}