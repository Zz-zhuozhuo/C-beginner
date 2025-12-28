#include <iostream>
#include <windows.h>
using namespace std;


//引用传递，形参能够修饰实参，使得实参的修改能够影响到形参的值。
int mySwarp03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl; //a的值变为20
    cout << "b = " << b << endl; //b的值变为10

    return 0;
}





int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    int a = 10;
    int b = 20;

    mySwarp03(a, b);

    cout << "a = " << a << endl; //a的值变为20
    cout << "b = " << b << endl; //b的值变为10

    return 0;
}