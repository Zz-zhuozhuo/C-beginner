#include <iostream> 
#include <windows.h> 
using namespace std; 

//引用作为函数的返回值
//不要返回局部变量的引用，因为局部变量在函数调用结束后会被销毁，返回其引用会导致悬空引用问题
/*int& func() 
{ 
    int a = 10; 
    //return a; 
    //错误：局部变量a在函数调用结束后会被销毁，返回其引用会导致悬空引用问题
    */

int& func() 
{ 
    static int a = 10; //全局区域，函数调用结束后由系统释放 
    return a; 
}
    




int main() 
{   
    SetConsoleOutputCP(65001); 

    int &ref = func(); //正确：返回局部变量的引用
    cout << ref << endl; 

    func() = 20; //正确：修改局部变量的值  如果函数的返回值是引用，可以作为左值使用
    cout << ref << endl; 

    return 0; 
}