//getinfo.cc -- input and output
#include <iostream>
int main(){
    using std::cout, std::cin, std::endl;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}