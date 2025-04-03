#include <stdio.h>

int main(){
    short count = 0;
    while(count < 4){
        short temp = 0;
        while(temp < count){
            printf(" ");
            temp++;
        }
        printf("*****\n");
        count++;
    }

    return 0;
}

//还可以优化❗️