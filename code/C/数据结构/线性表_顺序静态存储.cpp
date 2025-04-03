#include <iostream>
#define MaxSize 10

//定义一个顺序表类型
typedef struct{
    int data[MaxSize];  //静态所能存放的最大长度
    int Lenger; //顺序表长度
}SqList;

//函数实现
//列表的初始化
void InitList(SqList &L){
    for(int i=0; i<MaxSize; i++){
        L.data[i]=i+1;
    L.Lenger=0;
    }
}
//向顺序表输入元素
void CinData(SqList &L){
    for(int i=0; i<L.Lenger; i++){
        std::cin >> L.data[i];
    } 
}
//打印顺序表内元素
void PrintfData(SqList &L){
    for (int i=0; i<L.Lenger; i++){
        std::cout << L.data[i];
    }
}
//插入操作的实现
bool ListInsert(SqList &L ,int i ,int e){
    if(i<1||L.Lenger+1<i)    //判断位置是否正确     Lenger+1 是因为插入后自然就会多一个 使得i的取值范围增大 还有就是插入最后一块新增的也算插入
    return false;
    if(L.Lenger >MaxSize)    //判断是否以满     已经加过1了
    return false;

    for (int Temp=L.Lenger; Temp>=i; Temp--){
        L.data[Temp]=L.data[Temp-1];   //不用Temp+1 的原因是数组从0开始 而列表从1开始（下标关系）
    }
    L.data[i-1]=e;
    L.Lenger++;
    return true;
}

//主函数
int main(){
    SqList L;   //声明顺序表
    InitList(L);    //初始化顺序表
    std::cin >> L.Lenger;   //输入列表长度

    CinData(L); //输入顺序表元素
    ListInsert(L,3,6);   //那个位置 放什么元素
    PrintfData(L);  //打印顺序表
    //插入操作

    system("read");    //相当于 cls 操作
    system("clear");    //相当于win中的 pause 作用为清屏操作
}