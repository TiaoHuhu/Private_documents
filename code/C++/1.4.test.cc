//basic
#include <iostream>

int main(){
        // //1.使用while循环 计算1 至 10的累加结果
        // short count = 0 ,sum = 0;
        // while(count <= 10){
        //     sum = sum + count;
        //     count++;
        // }
        // std::cout << "Sum of 1 to 10 inclusive is " 
        // << sum << std::endl;

        //2.读取数量不定的输入数据
        int sum = 0 , value = 0;
        while(std::cin >> value){   //第一次连续输入就是将 所有输入放入缓冲区
                                    //⚠️ 缓冲区如何清理？   getchar();
            sum = sum + value;
        }
        std::cout << "Sum is : " << sum << std::endl;
        
        return 0;
}
