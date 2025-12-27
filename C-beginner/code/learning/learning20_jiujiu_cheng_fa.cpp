#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

    int line = 1; //外层循环的变量line初始化为1
    while (line <=9)
    {
        int num = 1; //内层循环的变量num初始化为1
        while (num <= line)
        {
            cout << num << "x" << line << "=" << num*line << " \t";   
            num++; //内层循环的变量num自增1
        }

        line++; //外层循环的变量line自增1
        cout << endl;

    }
    return 0;
}