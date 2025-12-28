#include <iostream>
#include <windows.h>
using namespace std;

//自动类型推导，必须推导出一致的数据类型T，才可以使用

//模板必须确定出T的数据类型，才可使用

template<class T>
void mySwap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10, b = 20;
    char c = 'a';
    mySwap(a, b);//正确
    
    //mySwap(a, c);//错误，类型不一致

    cout << "a=" << a << " b=" << b << endl;
}


//确定出T的数据类型后，就可以使用

template<class T>
void func()
{
    cout << "func 无参数调用" << endl;
}

void test02()
{
    func<int>(); //调用模板函数，确定出T的数据类型为int
    func<char>(); //调用模板函数，确定出T的数据类型为char
}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    test01();
    test02();

    return 0;
}