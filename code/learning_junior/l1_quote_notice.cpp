#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    //引用必须初始化，且一旦初始化后，就不能再指向其他变量
    int a = 10;
    int &b = a; //引用b指向a

    
    cout << b << endl; //输出10
    cout << *(&b) << endl; //输出10

    
    //引用初始化后不可变
    int c = 20;

    b = c; //赋值操作，不是更改引用b的指向
    cout << "a = " << a << endl; //a的值变为20
    cout << "b = " << b << endl; //b的值变为20

    return 0;
}