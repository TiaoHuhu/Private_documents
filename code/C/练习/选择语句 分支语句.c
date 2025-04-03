#define _CRT_SECURE_ON_WARNINGS
//选择语句 分支语句
#include <stdio.h>

int main(){
    int input = 0;
    printf ("你要好好学习吗？");
    printf ("1/0:");
    scanf ("%d", &input);
    if (input ==1){
        printf ("Goooooood!\n");
    }
    else
        printf ("Noooooooo!\n");

    return 0;
}