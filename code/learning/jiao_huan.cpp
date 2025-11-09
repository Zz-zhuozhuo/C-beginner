#include <iostream>
#include <windows.h>
using namespace std;

void swapValues(int num1, int num2)
{
    cout << "交换前：num1 = " << num1 << ", num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：num1 = " << num1 << ", num2 = " << num2 << endl;
}

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码问题

    int a = 10, b = 20;
    cout << "a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    // 输出：
    return 0;
}