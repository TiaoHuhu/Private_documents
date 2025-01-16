#include <stdio.h>

int main(){
    int n = 0;
    //scanf("%d",&n);
    printf("Eeter one value:");
    fflush(stdout);
    scanf("%d",&n);
    fflush(stdout);
    int i = 0;
    while(i++ < n){
        printf("hello!\n");
    }

    return 0;
}

//解决printf scanf输出顺序的问题
//由于缓冲区有残留的问题 上次输的number在输入时还带入了enter键 printf在执行时会等待缓冲区空 空才可执行
//可用getchar() OR fflush(stdout);