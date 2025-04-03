#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100                              //最大容量

typedef struct {
    int data[MAXSIZE];
    int length;                                  //当前长度
} SqList;

void InitList(SqList *list) {
    //初始化顺序表
    list->length = 0;                           //表长赋0
    printf("顺序表已初始化！\n");
}

void DestroyList(SqList *list) {
    //销毁顺序表
    list->length = 0;                           //简单清空长度即可 
    printf("顺序表已销毁！\n");
}

int GetLength(SqList *list) {                   //Length
    //求顺序表的长度
    return list->length;                        //返回结构体sqlist 指针类型 的length（长）
}


void TraverseList(SqList *list) {               //PrintList
    //遍历顺序表
    printf("顺序表内容：");
    for (int i = 0; i < list->length; i++) {    //表达式2 循环条件小于顺序表长度 后自加
        printf("%d ", list->data[i]);           //指针指向地址的data 数组
    }
    printf("\n");
}

int LocateElem(SqList *list, int value) {        //Locate
    //按值查找
    for (int i = 0; i < list->length; i++) {     //表达式2 循环条件小于顺序表长度 后自加
        if (list->data[i] == value) {            //向顺序表的data数组赋值 value（意思:价值）
            return i + 1;                        //返回位置（从1开始）
        }
    }
    return -1;                                   //未找到
}

int GetElem(SqList *list, int pos) {             //Get
    //按位查找
    if (pos < 1 || pos > list->length) {         //pos （标志）限定循环范围 1到length 
        printf("位置无效！\n");                    //超出范围 提示
        return -1;
    }
    return list->data[pos - 1];                   //在上循环不成立时运行 接触数组 0号位的影响
}

int InsertElem(SqList *list, int pos, int value) {//value（价值）存储输入的数据
    //插入操作
    if (pos < 1 || pos > list->length + 1) {      //作用 输入超出范围的位置 中断 并提示
        printf("插入位置无效！\n");
        return 0;
    }
    if (list->length == MAXSIZE) {
        printf("顺序表已满，无法插入！\n");
        return 0;
    }
    for (int i = list->length; i >= pos; i--) {
        list->data[i] = list->data[i - 1];
    }
    list->data[pos - 1] = value;
    list->length++;
    return 1;
}

int DeleteElem(SqList *list, int pos) {         //pos 接收传入的形参 及删除的位置
    //删除操作
    if (pos < 1 || pos > list->length) {        //作用 输入超出范围的位置 中断 并提示
        printf("删除位置无效！\n");
        return 0;
    }
    for (int i = pos - 1; i < list->length - 1; i++) {//表达式1 消除数组0的影响 表达式2 循环次数 表达式3 自加
        list->data[i] = list->data[i + 1];      //将数组右侧的 数据向前移动（覆盖）
    }
    list->length--;                             //表长减1
    return 1;
}

void Test(SqList * list){
    //测试函数
    int Count = 0;
    short pos ,value;   pos = 1; value = 66;
    while(Count++ < 5){
    InsertElem(list , pos , value);
    pos++; value++;
    }
    printf ("初始化测试数据成功！\n");
}

void PrintfInterface(){
    printf("\t\t\t**计算机2337班 四小组\n");
    printf("\t\t\t**----------------\n");
    printf("\t\t\t**---0.退出系统---\n");
    printf("\t\t\t**--1.顺序表插入--\n");
    printf("\t\t\t**--2.顺序表长度--\n");
    printf("\t\t\t**--3.打印顺序表--\n");
    printf("\t\t\t**--4.按值查找  --\n");
    printf("\t\t\t**--5.按位置查找--\n");
    printf("\t\t\t**--6.删除元素  --\n");    
    printf("\t\t\t**--7.顺序表销毁--\n");
    printf("\t\t\t**--8.输出界面  --\n");
    printf("\t\t\t**--9.测试数据  --\n");    
    printf("\t\t\t**----------------\n");
}

int main() {
    SqList list;
    int choice, pos, value;
    InitList(&list);                    //顺序表初始化
    //list.data[100] = {5,6,7,8,9};       //添加原始数据
    PrintfInterface();                  //打印界面

    while (1) {
        printf("请输入你的选择(0~8):");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("程序退出！\n");
                exit(0);            
            case 1:
                printf("请输入插入的位置和值（空格分隔）：");
                scanf("%d %d", &pos, &value);
                if (InsertElem(&list, pos, value))
                    printf("插入成功！\n");
                    TraverseList(&list);            
                break;
            case 2:
                printf("顺序表的长度为：%d\n", GetLength(&list));
                break;            
            case 3:
                TraverseList(&list);
                break;
            case 4:
                printf("请输入要查找的值：");
                scanf("%d", &value);
                pos = LocateElem(&list, value);
                if (pos != -1)
                    printf("值%d的位置是:%d\n", value, pos);
                else
                    printf("值%d未找到!\n", value);
                break;
            case 5:
                printf("请输入要查找的位置：");
                scanf("%d", &pos);
                value = GetElem(&list, pos);
                if (value != -1)
                    printf("位置%d的值是:%d\n", pos, value);
                break;
            case 6:
                printf("请输入要删除的位置：");
                scanf("%d", &pos);
                if (DeleteElem(&list, pos))
                    printf("删除成功！\n");
                TraverseList(&list);
                break; 
            case 7:
                DestroyList(&list);
                break;                
            case 8:
                PrintfInterface();
                break;           
            case 9:
                Test(&list);
                break;
            default:
                printf("无效的选择，请重新输入！\n");
        }
    }
    return 0;
}