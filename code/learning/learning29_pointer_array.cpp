#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    int arr[5] = {1, 2, 3, 4, 5};
    int * ptr = arr; //指针中存放的是数组的首地址

    cout << "数组中第一个元素为：" << *ptr << endl; //输出数组中第一个元素
    cout << "数组中第一个元素为：" << arr[0] << endl; //输出数组中第一个元素
    
    
    cout << "数组中第二个元素为：" << *(ptr + 1) << endl; //输出数组中第二个元素    
    cout << "数组中第二个元素为：" << arr[1] << endl; //输出数组中第二个元素

    return 0;
}