#include <stdio.h>
#define x 5 //x坐标
#define y 5 //y坐标

//二维数组初始化
void initialization(int* Tarr){
    short count = 0;    //计数器
    short count_x = 0;  //外层循环 行
    while (count_x < x){
        short count_y = 0;  //内层循环 列
        while (count_y < y){
            *Tarr = count++;    //初始化数组元素
            printf("%d \t" ,*Tarr++);      //若不是顺序存储结构该如何 -> 对于指针指向的揭可如此
            count_y ++;
        }printf("\n");
        count_x ++;
    }
}

//调用 函数
int main(){
    int array[x][y] = {0};  //创建数组并初始化为0
    initialization(array);  //初始化函数初始化数组

    return 0;
}