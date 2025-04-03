#include <stdio.h>
//表达式优先级
int main(){
    //EG
    int c = 1;
    c = c + --c;    //有歧义 自己写表达式计算路径要唯一
    printf("%d\n" ,c);

    //EG
    int i = 1;
    int x = (++i)+(++i)+(++i);  //结果 9
    printf("%d\n" ,x);
    return 0;
}

//《c》(谭浩强) 书中有表格