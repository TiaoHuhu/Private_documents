//A function with a default parameter value 默认形参值的函数
// #include<iostream>
// using namespace std;
// int add(int a=3,int b=5)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<add(10,20)<<endl;//将10和20分别给a和b
//     cout<<add(30)<<endl;//将30给a，b为默认的5
//     cout<<add()<<endl;//使用a、b的默认值3和5
//     return 0;
// }
//
//需要注意的是，由于参数的传递顺序是从右至左入栈，所以有默认值的参数必须在放在形参列表的最右边！
//另外，当函数需要提前声明时，若形参存在默认参数，则声明部分可以制定默认值，而后面的函数定义部分则不再制定默认值。
