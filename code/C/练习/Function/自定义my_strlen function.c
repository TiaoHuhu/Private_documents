#include <stdio.h>
// //非递归方法
// int My_strlen(char * Arr){
//     int count = 0;
//     while((*Arr++) != '\0'){
//         count ++;
//     }
//     return count;
// }

//递归方法
int My_strlen(char * Arr){
    int count = 0;
    while((*Arr++) != '\0'){
        My_strlen(Arr);
        count ++;
    }
    return count;
}

int main(){
    char arr[] = "bit";
    int len = My_strlen(arr);
    printf ("len = %d\n" ,len);

    return 0;
}