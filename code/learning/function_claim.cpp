#include <iostream> 
#include <windows.h> 
using namespace std; 

// 使用不同的函数名避免冲突
int myMax(int a, int b);

int myMax(int a, int b) 
{ 
    return (a > b) ? a : b; 
}

int main() 
{   
    SetConsoleOutputCP(65001); // 解决中文乱码

    int x = 10, y = 20; 

    cout << "较大的数是: " << myMax(x, y) << endl; 
    return 0;
}