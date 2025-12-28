#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    bool is_running = true;
    int num = 0;
    while (is_running)
    {  
        cout << "欢迎来到我的世界！" << endl;
        num++;
        if (num >=6)
        {
            is_running = false;
        }
    }
    return 0;
}
// Below is the code of d:\dev\code\learning15_while_2.cpp 