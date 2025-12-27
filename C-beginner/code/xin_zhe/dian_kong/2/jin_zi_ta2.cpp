#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码问题

    // 输入金字塔的行数
    int rows;
    cout << "请输入金字塔的行数= ";
    cin >> rows;
    
    // 外层循环控制行数
    for (int i = rows; i >= 1; i--) 
    {
        // 打印空格
        for (int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        
        // 打印星号
        for (int k = 1; k <= 2*i - 1; k++) 
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}