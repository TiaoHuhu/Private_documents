#include <stdio.h>
//结构体的使用
struct stu{
    int age;
    char name[20];
};

int main(){
    struct stu s1 = {18 ,"liming"};
    printf ("%d %s\n" ,s1.age ,s1.name);
    //or
    struct stu *ps = &s1;
    printf ("%d %s\n" ,ps->age ,ps->name);
    //or
    printf ("%d %s\n" ,(*ps).age ,(*ps).name);

    return 0;
}