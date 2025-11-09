#include <iostream> 
#include <windows.h> 
using namespace std; 

//无参无返回值函数 
void myFunction() 
{ 
    cout << "这是一个无参无返回值的函数" << endl; 
} 


//无参有返回值函数 
int myFunction2() 
{ 
    cout << "这是一个无参有返回值的函数" << endl; 
    return 0; 
} 

//有参无返回值函数 
void myFunction(int x) 
{ 
    cout << "这是一个有参无返回值的函数，参数为：" << x << endl; 
} 

//有参有返回值函数 
int myFunction(int x, int y) 
{ 
    cout << "这是一个有参有返回值的函数 " << endl; 
    int sum = x + y; 
    return sum; 
} 



int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    myFunction(); // 调用无参无返回值函数
    myFunction2(); // 调用无参有返回值函数
    myFunction(10); // 调用有参无返回值函数
    cout << "返回值：" << myFunction(5, 8) << endl; // 调用有参有返回值函数

    return 0; 
}

