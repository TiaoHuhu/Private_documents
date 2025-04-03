#include <stdio.h>
#include <string.h>

int main(){
    printf ("%d\n",4321);
    printf ("%d\n", printf("%d", printf ("%d", 43)));   //pirntf的返回值是打印在屏幕上字符的个数；
    return 0;
}