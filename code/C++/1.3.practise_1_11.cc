//用户 输入两个整数 打印这两个内的所有整数
#include <iostream>

void print_function(int left , int right){
    while(left != right){
        std::cout << right << " ";
        right--;
    }
    
}

int main(){
    int left = 0 ,right = 0;
    std::cout << "please enter left and right for area:" ;
    std::cin >> left >> right;
    print_function(left , --right); //--right的目的是去掉上边界

    return 0;
}

//可以加入左右区域是否输入正确判断
//可以使用实参向形参转变的特性 值传递 不改变原来函数的实际值
//以上打印是 逆序打印
