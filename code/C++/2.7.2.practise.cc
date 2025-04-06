//编写一个c++程序 它要求用户输入一个以long为单位的距离 然后将它转化为码（一long = 220码）
#include "head.h"
int conversion(int n);

int main(){
    using namespace std;
    int speed = 0;
    cout << "Enter a number in long : ";
    cin >> speed;
    cout << "convert to 码 : " << conversion(speed) << endl;    //cout似乎不支持嵌套 只可以使用返回值 加入流

    return 0;
}

int conversion(int n){
    return  n*220;
}//转换函数
