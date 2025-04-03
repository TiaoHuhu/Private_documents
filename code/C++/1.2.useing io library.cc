//使用io库 提示用户输入两个数 然后输出它们的和
#include <iostream>

int main(){
    std::cout <<"Enter two munber:";
    int v1 = 0 , v2 = 0;
    std::cin >> v1 >> v2;
    // std::cout << std::endl;
    std::cout << "The sum of " << v1 << " and " << v2 
                << " is " << v1 + v2 << std::endl;

    return 0;
}
