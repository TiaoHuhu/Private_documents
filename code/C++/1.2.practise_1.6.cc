#include <iostream>
//解释如下程序是否合法
// std::cout << "The sum of " << v1;
//             << " and " << v2;
//             << " is " << v1 + v2 << std::endl;

int main(){
    int v1 = 99 , v2 = -9;
    // std::cout << "The sum of " << v1;
    //             << " and " << v2;   //expected expression
    //             << " is " << v1 + v2 << std::endl;  //expected expression
    //以上的错误 如何表述？

    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1+v2 << std::endl;
    
    std::cin.get();
    //std::cin.get();
    return 0;
}
