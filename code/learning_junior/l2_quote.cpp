#include <iostream>
#include <windows.h>
using namespace std;

//引用本质是给变量起别名，可以起到变量的另一种名称，可以方便地使用变量。


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    int a = 10;
    int &b = a; //引用变量b指向变量a

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 20; //修改变量a的值，变量b也会跟着变化

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}