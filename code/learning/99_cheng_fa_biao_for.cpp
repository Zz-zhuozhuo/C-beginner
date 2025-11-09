#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

    for (int line = 1; line <= 9; line++) //外层循环控制行数
    {
        for (int col = 1; col <= line; col++) //内层循环控制列数
        {
            cout << col << "x" << line << "=" << col * line << "\t ";
        }
        cout << endl; //每一行之间换行
    
    }
    return 0;
}