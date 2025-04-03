#include <stdio.h>
//测试双重指针 与 指针

void printPointer(int a){
    printf("%d \n" ,a);
}

//值传递
void pointerTest(int a){
    a = 100;
}
//地址传递
void pointerTest2(int* a){
    *a = 100;
}

//双重指针
void doublePointerTest(int p){
    p = 100;
}
int main(){
    int a = 99;
    pointerTest(a);
    printPointer(a);
    pointerTest2(&a);
    printPointer(a);

    a = 99;
    int* p = &a;
    doublePointerTest(p);
    printPointer(a);

    return 0;
}