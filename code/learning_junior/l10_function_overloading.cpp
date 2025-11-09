#include <iostream> 
#include <windows.h> 
using namespace std; 


//函数重载：函数名可以重复使用
//函数重载的条件：
/*1、函数参数类型不同、个数不同、顺序不同
  2、同一作用域下
  3、函数名称相同
  4、函数返回值不可以作为函数重载的条件*/

void func()
{
    cout << "func 无参数调用" << endl;
}

void func(int a)
{
    cout << "func 一个参数调用" << endl;
}

void func(double a)
{
    cout << "func 一个double参数调用" << endl;
}

//顺序不同
void func(int a, double b)
{
    cout << "func 两个参数调用" << endl;
}

//函数的返回值不可以作为函数重载的条件

//int func(int a)
//{
//    return 10;
//}

int main() 
{   
    SetConsoleOutputCP(65001); 

    func(); //调用无参数的func函数
    func(10); //调用一个参数的func函数
    func(10.0); //调用一个double参数的func函数
    func(10, 20.0); //调用两个参数的func函数

    return 0; 
}