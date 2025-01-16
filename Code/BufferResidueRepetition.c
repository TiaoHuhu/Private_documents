#include <stdio.h>

int main(){
    int a;
    char b;
    scanf("%d",&a); 
    getchar(); //用于清理缓冲区
    //fflush(stdin);
    scanf("%c",&b);
    fflush(stdin);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}

//复现scanf吃enter的情况 enter在ASCII中就是10（十进制）
//fflush(stdout); //作用清理输出缓冲区内容
//fflush(stdin); //作用清理输入缓冲区内容

//后续忘记 就自己复现
//Summarize:连续输入 就在scanf后加 吃缓冲区残留的语句 fflush(stdin);
//scanf printf 输出顺序问题 printf后加fflush(stdout);
