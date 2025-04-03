#include <stdio.h>
#include <string.h>

//memset  内存 set 设置

int main(){
    char arr[] = "hello world";
    memset(arr,'*',5);
    printf ("%s\n",arr);
    return 0;
}//替换 前五个的空间