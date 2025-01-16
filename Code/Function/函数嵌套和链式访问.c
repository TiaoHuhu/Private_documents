#include <stdio.h>
#include <string.h>
//函数的嵌套调用 and 链式访问
//嵌套 
//链式访问 将一个函数的返回值作为另外一个函数的参数

int main(){
    int len = 0;
    len = strlen("abc");
    printf ("%d\n",len);

    printf ("%d\n",strlen("abc"));    //链式访问
    //789 = 11 code

    return 0;
}