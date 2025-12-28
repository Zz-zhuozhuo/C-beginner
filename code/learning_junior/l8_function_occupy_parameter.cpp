#include <iostream> 
#include <windows.h> 
using namespace std; 

//占位参数
void func(int a , int)
{
    cout << "占位成功！" << endl;
}


int main() 
{   
    SetConsoleOutputCP(65001); 

    //既然占了位，就必须向占位的参数传递参数
    func(10 , 20);

    return 0; 
}

