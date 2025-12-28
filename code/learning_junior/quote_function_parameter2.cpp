#include <iostream>
#include <windows.h>
using namespace std;


//地址传递，形参能够修饰实参
void mySward02(int * a, int * b)

{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "*a = " << *a << endl; //a的值变为20
    cout << "*b = " << *b << endl; //b的值变为10
}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    int a = 10, b = 20;

    mySward02(&a, &b); //地址传递

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

