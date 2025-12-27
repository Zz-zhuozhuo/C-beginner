#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码
    
    int arr[5] = {1, 2, 3, 4, 5}; 
    int i = 0; 
    while (i < sizeof(arr)/ sizeof(arr[0]))
    { 
        cout << "while循环输出数组元素：" << arr[i] << endl; 
        i++; 
    } 

    for (int j = 0; j < sizeof(arr)/ sizeof(arr[0]); j++)
    { 
        cout << "for循环输出数组元素：" << arr[j] << endl; 
    } 

    for (int element : arr)
    { 
        cout << "高级for循环输出数组元素：" << element << endl; 
    } 


    return 0; 
}