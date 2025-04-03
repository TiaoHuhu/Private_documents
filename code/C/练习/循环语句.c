#define _CRT_SECURE_ON_WARNINGS
//循环语句
#include <stdio.h>

int main(){
    int line = 0;

    while(line<10000){
        printf ("敲一行代码：%d\n",line);
        line++;
    }
    if(line>=10000){
        printf ("好offer\n");
    }

    return 0;
}