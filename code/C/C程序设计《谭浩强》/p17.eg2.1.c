//求5的阶乘
#include <stdio.h>

#define number 5

//递归函数
//count 5 -> 4 -> 3 -> 2 -> 1
int function(int tp_number){
    int sum = 0;
    if(tp_number == 1) sum = 1;
    else sum = tp_number * function(tp_number-1);
    return sum;
}

int main(){
    //递归
    printf("%d\n",function(number));
    
    return 0;
}