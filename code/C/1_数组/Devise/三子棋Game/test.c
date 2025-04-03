//测试三子棋
#include "game.h"

void menu(){
    printf ("******************\n");
    printf ("***1.play*0.exit**\n");
    printf ("******************\n");
}

void game(){
    //数组存放走出的棋盘信息
    char board [ROW][COL] = {0};
    //初始化board
    InitBoard(board ,ROW ,COL);
    //打印board
    DisplayBoard(board ,ROW ,COL);
}

void test(){
    int input = 0;
    do{
        menu();
        printf ("请选择：>");
        scanf ("%d",&input);
        
        switch(input){
            case 1: printf ("三子琪\n");
                break;
            case 0: printf ("退出游戏\n");
                break;
            default: printf ("输入错误!!!\n");
                break;
        }
    }while(input);

}

int main(){
    test();

    return 0;
}