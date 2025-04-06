//编写一个c++程序 它使用3个用户定义的函数（包括main（）） 并生成下面的输出
#include "head.h"
void comone();
void comtwo();

int main(){
    comone();
    comone();
    comtwo();
    comtwo();

    return 0;
}

void comone(){
    std::cout << "Three blind mice\n";
}

void comtwo(){
    std::cout << "See how they run\n";
}
