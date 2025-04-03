#include <stdio.h>
#define MAX 3

//查看地图情况
void lookUp(int* map){
    short countW = 0;
    short countL = 0;
    while(countW < MAX){
        printf("%d ",*(map+countW));
        while(countL < MAX){
            printf("%d ",*(map+countL));
            countL ++;
        }
        countW ++;
    }
}
//要求 1.判断边界，墙 2.反馈地址 3.记录路径
//保存地图 3x3
void map(){
    short mapSave[MAX][MAX] = {{0,1,0},{0,0,1},{0,0,0}};
    //lookUp(mapSave);

    short countW = 0;
    short countL = 0;
    while(countW < MAX){
        printf("%d ",);
        while(countL < MAX){
            printf("%d ",);
            countL ++;
        }
        countW ++;
    }

}
//判断边界 地址记录

problems: 数组的值传递；二维数组的访问