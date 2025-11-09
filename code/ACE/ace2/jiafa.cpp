#include <iostream>
#include <Windows.h>
using namespace std;

// 位运算加法
int add(int a, int b) 
{
    while (b != 0) 
    {
        int carry = a & b;   // 进位
        a = a ^ b;           // 非进位和
        b = carry << 1;      // 进位左移
    }
    return a;
}


// 位运算减法
int subtract(int a, int b) 
{
    return add(a, add(~b, 1));  // a + (-b)
}



int main() 
{
    SetConsoleOutputCP(65001); // 解决中文乱码
    int x, y;
    cout << "输入两个数: ";
    cin >> x >> y;

    
    string op1 = " + ", op2 = " - ";
    string op;
    cout << "输入操作符 (+/-): ";
    cin >> op;

    
    if (op == "+") 
    {
        cout << x << op1 << y << " = " << add(x, y) << endl;
    } 
    
    else if (op == "-") 
    {
        cout << x << op2 << y << " = " << subtract(x, y) << endl;
    } 
    
    else 
    {
        cout << "无效的操作符" << endl;
    }
    
    
    //cout << x << " + " << y << " = " << add(x, y) << endl;
   // cout << x << " - " << y << " = " << subtract(x, y) << endl;
    
    return 0;
}