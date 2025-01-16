#include <stdio.h>
#include "game.c"
//Game 三子棋游戏

void menu(){
    printf("***********************\n");
    printf("***** 1.play .exit*****\n");
    printf("***********************\n");
}

void game(){
    //数组存放棋盘信息
    char Boart[ROW][COL] = {0};
    //初始化棋盘
    InitBoart(Boart ,ROW ,COL);
    //打印棋盘
    DispalyBoard(Boart ,ROW ,COL);



}

void test(){
    int input = 0;
    do{
        menu();
        printf("请选择:>");
        scanf("%d" ,&input);
        switch(input){
            case 1:
                game();
                //printf("三子棋\n");
                break;
            case 0:
                printf("退出游戏\n");
            default:
                printf("选择错误，请重新选择");
                break;
        }
    }while(input);
}

int main(){
    test();
    return 0;
}