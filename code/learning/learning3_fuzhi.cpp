#include <iostream>
#include "Windows.h"
using namespace std;

int main() 
{
    SetConsoleOutputCP(65001); //解决中文乱码问题   
    
    
    int a, b, c;
    a = 10;
    b = 20;
    c = a + b;
    
    cout <<"a的值为：" << a << endl;
    cout <<"b的值为：" << b << endl;
    cout <<"c的值为：" << c << endl;
    
    return 0;
}