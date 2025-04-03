//判断下列输出语句是否合法
#include <iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;    //error
    // std::cout << /* "*/" /* "/*" */; //error

    return 0;
}

//error returned
// /Volumes/machine_disk_share/Code_backup/C++/1.3.practise_1.8.cc:7:24: warning: missing terminating '"' character [-Winvalid-pp-token]
//     std::cout << /* "*/" */;
//                        ^
// /Volumes/machine_disk_share/Code_backup/C++/1.3.practise_1.8.cc:7:24: error: expected expression
// 1 warning and 1 error generated.