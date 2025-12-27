#include <iostream> 
#include <windows.h> 
using namespace std; 

//如果某个位置已经有了默认参数，那么从这个位置往后所有的参数都必须有默认参数
int func0(int a, int b = 20, int c = 30) 
{
    return a + b + c; 
} 

//错误 int func1(int a, int b = 20, int c) 
//错误 { 
//错误     return a + b + c; 
//错误 } 

//函数声明与实现
//声明与实现只能有一个有默认参数
int func1(int a = 10, int b = 20);
int func1(int a, int b) 
{ 
    return a + b ; 
}

//如果函数声明有默认参数，函数实现就不能用默认参数
//错误  int func(int a = 10, int b = 20); 
//错误  int func(int a = 10, int b = 20); 
//错误 { 
//错误     return a + b; 
//错误 } 



int main() 
{   
    SetConsoleOutputCP(65001); 

    //调用函数
    cout << "func0(20, 30) = " << func0(20, 30) << endl; 
    cout << "func1() = " << func1() << endl; 
    cout << "func1(10, 20) = " << func1(10, 20) << endl; 

}

