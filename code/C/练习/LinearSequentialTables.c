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

//按值查找
int LocateElem(SqList *list, int value) {        //Locate
    for (int i = 0; i < list->length; i++) {     //表达式2 循环条件小于顺序表长度 后自加
        if (list->data[i] == value) {            //向顺序表的data数组赋值 value（意思:价值）
            return i + 1;                        //返回位置（从1开始）
        }
    }
    return -1;                                   //未找到
}

//按位查找
int GetElem(SqList *list, int pos) {             //Get
    if (pos < 1 || pos > list->length) {         //pos （标志）限定循环范围 1到length 
        printf("位置无效！\n");                    //超出范围 提示
        return -1;
    }
    return list->data[pos - 1];                   //在上循环不成立时运行 接触数组 0号位的影响
}

//插入操作
int InsertElem(SqList *list, int pos, int value) {//value（价值）存储输入的数据
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

//删除操作
int DeleteElem(SqList *list, int pos) {         //pos 接收传入的形参 及删除的位置
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

void PrintfInterface(){
        printf("\n===========================\n");
        printf("0. 退出\n");
        printf("1. 初始化顺序表\n");
        printf("2. 销毁顺序表\n");
        printf("3. 求顺序表的长度\n");
        printf("4. 遍历顺序表\n");
        printf("5. 按值查找\n");
        printf("6. 按位查找\n");
        printf("7. 插入元素\n");
        printf("8. 删除元素\n");
        printf("9. 输出界面\n");
        printf("===========================\n");
}

int main() {
    SqList list;
    int choice, pos, value;

    while (1) {
        printf("请输入你的选择：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                InitList(&list);        //传入list地址
                break;
            case 2:
                DestroyList(&list);
                break;
            case 3:
                printf("顺序表的长度为：%d\n", GetLength(&list));
                break;
            case 4:
                TraverseList(&list);
                break;
            case 5:
                printf("请输入要查找的值：");
                scanf("%d", &value);
                pos = LocateElem(&list, value);
                if (pos != -1)
                    printf("值%d的位置是:%d\n", value, pos);
                else
                    printf("值%d未找到!\n", value);
                break;
            case 6:
                printf("请输入要查找的位置：");
                scanf("%d", &pos);
                value = GetElem(&list, pos);
                if (value != -1)
                    printf("位置%d的值是:%d\n", pos, value);
                break;
            case 7:
                printf("请输入插入的位置和值（空格分隔）：");
                scanf("%d %d", &pos, &value);
                if (InsertElem(&list, pos, value))
                    printf("插入成功！\n");
                break;
            case 8:
                printf("请输入要删除的位置：");
                scanf("%d", &pos);
                if (DeleteElem(&list, pos))
                    printf("删除成功！\n");
                break;
            case 9:
                    PrintfInterface();
                    break;
            case 0:
                printf("程序退出！\n");
                exit(0);
            default:
                printf("无效的选择，请重新输入！\n");
        }
    }
    return 0;
}
