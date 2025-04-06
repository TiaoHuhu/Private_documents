//调用函数将摄氏度转华氏度 有输入输出要求
#include "head.h"
double conversion(double);

int main(){
    using namespace std;
    double value = 0;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    cout << value << " degress Celsius is " << conversion(value) << " degress Fahrenheit." << endl;
    
    return 0;
}

double conversion(double value){
    return value*1.8+32;
}

//在计算有可能有小数 时候就要使用 double类型 以防止出现隐式转换 导致精度问题