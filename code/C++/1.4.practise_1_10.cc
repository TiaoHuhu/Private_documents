//使用递减运算符 按递减顺序打印出10 至 0 之间的整数
#include <iostream>

int main(){
    int count = 10;
    while(count >= 0){
        std::cout << count << " ";
        count--;
    }std::cout << "\n";

    return 0;
}
