#include <iostream>
#include <stdlib.h>

#define InitSize 10

//声明顺序表的函数实现
typedef struct{
    int *Data; //指示动态分配数组的存储空间
    int MaxSize;
    int Length;
}SqList;
//初始化顺序列表
void InitList (SqList &L){
    L.Data= (int *)malloc(InitSize *sizeof(int));   //申请一块连续的空间
    L.MaxSize= InitSize;
    L.Length= 0;
}
//输入\输出 函数
void ListIO(SqList &L){
    int Temp;
    std::cin >> Temp;
    switch(Temp){
        case 1:
        for (int i=0; i<L.Length; i++){
            std::cin >> L.Data[i];
        }break;
        case 2:
        for (int i=0; i<L.Length; i++){
            std::cout << L.Data[i];
        }break;

    }

}
//增加动态数组长度 （C：用malloc申请存储空间 free释放 C++：用new申请 delete释放）
void IncreaseSize(SqList &L, int Len){
    int *p= L.Data;
    L.Data= (int *)malloc((L.MaxSize+Len)*sizeof(int));
    for(int i=0; i<L.Length; i++){
        L.Data[i]= p[i];
    }
    L.MaxSize= L.MaxSize+Len;
}
//主函数
int main(){
    SqList L;
    InitList (L);   //初始化
    
    ListIO(L);
    IncreaseSize(L,5);
    return 0;
}