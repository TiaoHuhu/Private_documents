//inline function 内联函数
//内联函数 解决 函数在频繁调用时产生的时间,空间开销 (函数在调用时才会有生命周期 所以...)
//内联的机制，即仍然使用自定义函数，但在编译的时候，把函数代码插入到函数调用处，从而免去函数调用的一系列过程，
//(续)像普通顺序执行的代码一样，来解决这个问题
// #include<iostream>
// using namespace std;
  
// inline int Max(int a,int b)
// {
//     return a>b?a:b;
// }
// int main()
// {
//     cout<<Max(3,5)<<endl;
//     cout<<Max(7,9)<<endl;
//     return 0;
// }
