#include <iostream>
#include <windows.h>
using namespace std;


//值传递，形参不会修饰实参
void mySwarp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl; //a的值变为20
    cout << "b = " << b << endl; //b的值变为10
}

int main()
{
    
    SetConsoleOutputCP(65001); //解决中文乱码

    int a = 10;
    int b = 20;

    mySwarp(a, b); 
    cout << "a = " << a << endl; //a的值还是10
    cout << "b = " << b << endl; //b的值还是20

    return 0;
}