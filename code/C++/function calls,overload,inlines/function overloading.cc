//function overloading 函数重载
//函数重载即两个或以上的函数，函数名相同，但形参类型或个数不同，
//(续)编译器根据调用方传入的参数的类型和个数，自动选择最适合的一个函数来进行绑定调用，自动实现选择。
// #include<iostream>
// using namespace std;
// int add(int a,int b)
// {
//     cout<<"(int ,int)\t";
//     return a+b;
// }
// double add(double a,double b)
// {
//     cout<<"(doble ,double)\t";
//     return a+b;
// }
// double add(double a,int b)
// {
//     cout<<"(double ,int)\t";
//     return a+b;
// }
// double add(int a,double b)
// {
//     cout<<"(int ,double)\t";
//     return a+b;
// }
// int main()
// {
//     cout<<add(2,3)<<endl;
//     cout<<add(2.9,15.3)<<endl;
//     cout<<add(10,9.9)<<endl;
//     cout<<add(11.5,5)<<endl;
//     return 0;
// }

