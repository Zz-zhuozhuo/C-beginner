#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    //三目运算符
    //将a和b作比较，变量大的值赋值给变量c

    int a = 10;
    int b = 20;
    int c = 0;

    c = (a > b ? a : b); //如果a大于b，则c等于a，否则c等于b
    cout << "c = " << c << endl;

    //三目运算符返回的是变量，可以继续赋值
    (a > b ? a : b) = 30;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0; 
}