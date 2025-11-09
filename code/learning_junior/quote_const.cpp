#include <iostream> 
#include <windows.h> 
using namespace std; 

//识别到是引用，转换为int *const ref = &a; 
void func(int &ref)
{
    ref = 100;
}

int main() 
{   
    SetConsoleOutputCP(65001); 
    
    int a = 10; 
    int &ref = a;

    ref = 20; //识别到是引用，自动转为*ref = 20;

    cout << "a = " << a << endl; //输出a = 20
    cout << "ref = " << ref << endl; //输出ref = 20

    func(a); //识别到是引用，自动转为func(&a);
    return 0; 
}
