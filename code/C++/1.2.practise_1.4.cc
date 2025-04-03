//程序加法运算符来相加两个数字 使用乘法运算*来打印两个数的积
#include <iostream>

int main (){
    int x = 0 ,y = 0;
    std::cout << "please enter x and y:";
    std::cin >> x >> y; //连续输入有没有什么要求？
    std::cout << "x + y =" << x+y << std::endl;
    std::cout << "x * y =" << x*y << std::endl;
    return 0;
    
}
