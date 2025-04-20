//Strings are in reverse order 字符串逆序问题 (函数调用的实例)
// #include<iostream>
// #include<cstring>
// using namespace std;
// int Reverse(char a[],char b[])
// {
//     int i=0,n;
//     n=strlen(a);
//     while(a[i]!='\0')
//     {
//         b[n-i-1]=a[i];
//         i++;
//     }
//     b[n]='\0';
//     return 0;
// }
// int main()
// {
//     char str1[100];
//     char str2[100];
//     cin>>str1;
//     Reverse(str1,str2);
//     cout<<str2<<endl;
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;
const int ARR_MAX_SIZE 100;

void Reverse(char a[],chat b[])
{
	int len=strlen(a),count=0;
	while(a[count]!='\0')
	{
		b[len-count-1] = a[count];
		count++;
	}
	b[n]='\0';
}

int main(){
	int str1[ARR_MAX_SIZE]={},str2[ARR_MAX_SIZE]={};
	cin>>atr1;
	Reverse(str1,str2);
	cout << str2 << endl;
	return 0;
}
