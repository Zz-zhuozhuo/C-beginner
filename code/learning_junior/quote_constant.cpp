#include <iostream> 
#include <windows.h> 
using namespace std; 

void showValue(const int &val)
{
    //val = 20; //试图修改常量引用，编译器报错
    cout << "val = " << val << endl;
}



int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    //常量引用：用来修饰形参，防止误操作
    
    int a = 10; 
    showValue(a); //调用函数，传入常量引用
    const int &ref = 10; //加上const后，自动改为 int temp = 10; const int &ref = temp;

    return 0; 
}