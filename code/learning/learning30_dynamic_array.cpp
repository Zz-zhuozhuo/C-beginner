#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // 解决控制台中文乱码问题
    SetConsoleOutputCP(65001);

   // 定义变量
    int size;
    
    // 获取数组大小
    cout << "请输入数组元素个数: ";
    cin >> size;
    
    // 创建动态数组
    int *arr = new int[size];
    
    // 输入数组元素
    cout << "请依次输入" << size << "个整数:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "第" << i + 1 << "个元素: ";
        cin >> arr[i];
    }
    
    // 显示数组
    cout << "您输入的数组: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 必须手动释放内存！
    delete[] arr;
    
    return 0;
}