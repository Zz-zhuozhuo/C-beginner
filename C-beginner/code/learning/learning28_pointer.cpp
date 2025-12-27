#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int a = 10;
    int * p = nullptr; // 指针初始化为nullptr
    
    p = &a; // 指针指向a的地址

    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl; // 输出a的值
    cout << "&a = " << &a << endl; // 输出a的地址
    cout << "&*p = " << &*p << endl; // 输出p的地址

    *p = 20; // 修改a的值
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl; // 输出a的值

    p++; // 指针指向下一个地址

    cout << p << endl; // 输出p的地址
    cout << *p << endl; // 输出p指向的地址的值

    return 0;
}

