#include <iostream> 
#include <windows.h> 
using namespace std;

void swap(int num1, int num2)
{
    cout << "交换前：num1 = " << num1 << ", num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：num1 = " << num1 << ", num2 = " << num2 << endl;
}



    
int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int a = 10, b = 20;
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

