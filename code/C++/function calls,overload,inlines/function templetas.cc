//function templates 函数模版
//函数重载，可以处理多种数据类型，虽然是同一个名字，但仍然要分开定义
//函数模板，是可以创建一个通用的函数，可以支持多种形参。用关键字template来定义，形式如下
//template<class 类型名1，class 类型名2…>
// 返回值 函数名（形参表列） 模板参数表
// {
//    函数体
// }
// 这个一般形式中，第一行的template<class 类型名1，class 类型名2…>是一句声明语句，template是定义模板函数的关键字，尖括号里可以有多个类型，前面都要用class(或者typename来定义)。
// (续)然后后面跟定义的函数模板，切记中间不可以加其他的语句，不然会报错！
//
//实例:
//#include<iostream>
// using namespace std;
// template<class T1,class T2>
// T1 add(T1 x,T2 y)
// {
//     cout<<sizeof(T1)<<","<<sizeof(T2)<<"\t";
//     return x+y;
// }
// int main()
// {
//     cout<<add(10,20)<<endl;;
//     cout<<add(3.14,5.98)<<endl;
//     cout<<add('A',2)<<endl;
//     return 0;
// }
