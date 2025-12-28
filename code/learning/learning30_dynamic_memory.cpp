#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    int* ptr = new int; // 申请4字节内存空间
    * ptr = 10; // 运行时错误，ptr 未分配内存

    cout << "new申请的4字节内存空间内，存储的整数值为：" << *ptr << endl;
    delete ptr;
    ptr = nullptr; // 释放内存


    int* ptr2 = new int[5]; // 申请5个4字节内存空间
    
    //ptr2的地址，即数组首元素的地址
    ptr2[0] = 10;
    ptr2[1] = 20;
    ptr2[2] = 30;
    *(ptr2 + 3) = 40; // 运行时错误，ptr2 未分配内存
    ptr2[4] = 50;

    cout << "数组的第一个元素是：" << ptr2[0] << endl;
    cout << "数组的第二个元素是个元素是：" << ptr2[1] << endl;
    cout << "数组的第三个元素是：" << ptr2[2] << endl;
    cout << "数组的第四个元素是：" << *(ptr2 + 3) << endl;
    cout << "数组的第五个元素是：" << ptr2[4] << endl;

    delete[] ptr2;
    ptr2 = nullptr; // 释放内存


    return 0;
}