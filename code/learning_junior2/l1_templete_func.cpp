#include <iostream>
#include <windows.h>
using namespace std;


//自动推导模板参数类型
template <typename T>
void mySwap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


/*
//手动指定模板参数类型
template <typename T1, typename T2>
void mySwap(T1& a, T2& b)
{
   T1 temp = a;
   a = b;
   b = temp;
}
   */





void test01()
{
    int a = 10, b = 20;
    cout << "before swap: a = " << a << ", b = " << b << endl;
    //自动推导模板参数类型
    mySwap(a, b);
    cout << "after swap: a = " << a << ", b = " << b << endl;

    //手动指定模板参数类型
    //mySwap<double>(a, b);
    
    
}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}