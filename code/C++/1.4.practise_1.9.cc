// 使用while循环将50 - 100的整数相加
#include <iostream>

int main(){
    int count = 0, sum = 0;
    while(0 <= count && count <= 100){
        sum = sum + count;
        count++;
    }
    std::cout << "sum of 1 to 100 inclusive is "
    << sum << std::endl;

    return 0;
}
