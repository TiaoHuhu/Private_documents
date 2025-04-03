 #include <stdio.h>
//设计一个程序 判断大端存储 小端存储
//judge

char check_sys();


int main(){
    int a = 3;
    short aa = (short)a;
    char* p = &a;
    printf("%d \n" ,sizeof(*p));

    printf("&a = %p \n" ,&a);
    //问题是如何用二进制显示其 存储内容
    //方法一
    printf("aa = %d \n" ,aa);
    //方法二
    short count = 0;
    while(count < 4){
        printf("%d " ,*(p++));
        count ++;
    }printf("\n");

    //封装在check_sys中
    printf("%d \n" ,check_sys());

    //结论是小端存储 
    return 0;
}

char check_sys(){
    int a = 1;
    return *(char*)&a;  //返回1小端 返回0大端
}//?????有问题 返回错误