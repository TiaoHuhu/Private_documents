//An exploration of the cout function       cout函数的探究
#include <iostream>
int main(){
    using std::cout,std::cin;
    cout << "first...";
    int x = 0;
    //cin >> x;
    cout << "secondly...";      //Test: Statements between two couts do not affect the flow 测试: 两cout间有语句不影响流
    return 0;
}
