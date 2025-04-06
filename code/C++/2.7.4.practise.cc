//编写一个程序 让用户输入其年龄 然后显示该年龄包含多少月
#include "head.h"
int conversion_age(int);

int main(){
    using namespace std;
    int age = 0;
    cout << "Enter you age :";
    cin >> age;
    cout << "The month in which your age is include : " << conversion_age(age) << endl;

    return 0;
}

int conversion_age(int n){
    return n*12;
}
