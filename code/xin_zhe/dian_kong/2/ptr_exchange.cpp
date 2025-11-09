#include <iostream> 
#include <windows.h> 
using namespace std;

void swap(int x, int y)
{
    cout << "交换前：x = " << x << ", y = " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "交换后：x = " << x << ", y = " << y << endl;
}



    
int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int a = 10, b = 20;
    swap(a, b);
    
    return 0;
}