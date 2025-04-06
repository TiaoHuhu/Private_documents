//调用自定义函数 将光年转化为对应天文单位 一光年 = 63240天文单位
#include "head.h"
double conversion(double);

int main(){
    using namespace std;
    double ly = 0;
    cout << "Enter thr number of light years: ";
    cin >> ly;
    cout << ly << " light years = " << conversion(ly) << " ... \n";
    
    return 0;
}

double conversion(double ly){
    return 63240*ly;
}
