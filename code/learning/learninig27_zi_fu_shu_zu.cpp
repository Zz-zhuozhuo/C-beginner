#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    char arr[] = "hello";
    cout << arr[0] << endl; //输出h
    cout << arr[1] << endl; //输出e
    cout << arr[2] << endl; //输出l
    cout << arr[3] << endl; //输出l
    cout << arr[4] << endl; //输出o
    
    cout << "sizeof(arr) = " << sizeof(arr) << endl; //输出sizeof(arr) = 6

    for (char i: arr) 
    {
        cout << i;
        
    }
    return 0; 
    
}