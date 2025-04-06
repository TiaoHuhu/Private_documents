//要求： 用户输入小时 分钟给void function 并按照要求输出
#include "head.h"
void conversion(int h,int m);

int main(){
    using namespace std;
    int h = 0 , m = 0;
    cout << "Enter the number of hours : ";
    cin >> h;
    cout << "Enter the number of minutes : ";
    cin >> m;
    conversion(h,m);    //调用函数 函数直接输出结果

    return 0;
}

void conversion(int h,int m){
        std::cout << "Time : " << h << ":" << m << std::endl;
}
