#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码问题

    int quanlity;
    cout << "请输入数组元素的个数: ";
    cin >> quanlity;
    
    int* arr = new int[quanlity];  // 动态创建数组
    cout << "请输入" << quanlity << "个整数:" << endl;
    for (int i = 0; i < quanlity; i++) 
    {
        cin >> arr[i];
    }
    

    // 判断是否有相等元素
    bool same = false;
    for (int i = 0; i < quanlity; i++)
    {
        for (int j = i + 1; j < quanlity; j++)
        {
            if (arr[i] == arr[j]) 
            {
                same = true;
                cout << arr[i];
                //cout << "找到相等元素: " << arr[i] << " 出现在位置 " << i + 1 << " 和 " << j + 1 << endl;
            }
        }
    }


    
    delete[] arr;  // 释放内存
    return 0;
}