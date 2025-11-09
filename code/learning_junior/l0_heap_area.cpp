#include <iostream>
#include <windows.h>
using namespace std;

int * func()
{
    //在堆区开辟一个整型空间
    //new返回的是该数据类型的指针
    int * p = new int(10);
    return p;
                     
}


//指针本质也是局部变量，放在栈上，指针保存的数据放在堆区，所以堆区的空间需要手动释放
int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    int * p = func();
    cout << "*p = " << *p << endl;

    //手动释放堆区空间
    delete p;

    system("pause");
    return 0;
}