//输出一段含有不正确的嵌套注释的程序 观察编译器返回错误信息
#include <iostream>

int main(){
    /*functio/*n();*/*/
    std::cout << "nihao\n";

    return 0;
}

// //error returned
// ///Volumes/machine_disk_share/Code_backup/C++/1.3.practise_1.7.cc:5:14: warning: '/*' within block comment [-Wcomment]
//     /*functio/*n();*/*/
//              ^
// /Volumes/machine_disk_share/Code_backup/C++/1.3.practise_1.7.cc:5:23: error: expected expression
//     /*functio/*n();*/*/

