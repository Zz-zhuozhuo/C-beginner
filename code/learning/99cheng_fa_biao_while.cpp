#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int line = 1;        //外层循环控制因子，从1开始
    while (line <= 9)    //外层循环，控制行数
    {
        int num = 1;     //内层循环控制因子，从1开始
        while (num <= line) //内层循环，控制列数
        {
            cout << num << "x" << line << "=" << line * num << "\t"; //输出乘法表达式
            num++;
        }
        cout << endl; //换行
        line++; //外层循环控制因子加1，进入下一行
    }

    return 0; 
}