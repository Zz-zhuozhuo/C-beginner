#include <iostream> 
#include <windows.h> 
using namespace std; 


void func(int &a)
{
    cout << "int &a" << endl;
}

void func(const int &a)
{
    cout << "const int &a" << endl;
}

//以下两个函数会导致函数重载冲突，因为传递参数时无法区分调用哪个函数(避免出现二义性)

/*
void func(int a, double b)
{
    cout << "func(int a, double b)" << endl;
}

void func(int a)
{
    cout << "func(int a)" << endl;
}
*/



int main() 
{   
    SetConsoleOutputCP(65001); 

    int a = 10;
    func(a); // 输出 int &a，系统默认为可读可写的引用

    func(10); // 输出 const int &a，系统默认为const引用

    return 0; 
}

