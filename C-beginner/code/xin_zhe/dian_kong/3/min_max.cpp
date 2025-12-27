#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码

    
    int size;
    
    
    
    // 询问用户数组大小
    cout << "请输入数组的元素个数: ";
    cin >> size;
    
    
    
    // 创建动态数组
    int *pArr = new int[size];
    
    
    // 让用户输入数组元素
    cout << "请依次输入" << size << "个整数:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "第" << i + 1 << "个元素: ";
        cin >> pArr[i];
    }
    
    
    
    // 显示用户输入的原始数组
    cout << "您输入的数组是: ";
    for (int i = 0; i < size; i++) 
    {
        cout << pArr[i];
        if (i < size - 1) 
        {
            cout << ", ";
        }
    }
    cout << endl;
    
    
    // 选择排序算法
    int min;        // 最小值
    int min_index;  // 最小值的索引

    for (int i = 0; i < size - 1; i++) 
    {                        // 遍历数组，找出本次的最小值并且放入开头位置
        min = pArr[i];      // 初始化最小值
        min_index = i;      // 初始化最小值的索引
        
        for (int j = i + 1; j < size; j++) 
        {
            if (pArr[j] < min) 
            {                    // 找到更小的值
                min = pArr[j];
                min_index = j;
            }
        }

        
        // 交换最小值和当前位置的元素
        if (min_index != i) 
        {                             // 只有找到更小的值才交换
            int temp = pArr[i];
            pArr[i] = pArr[min_index];
            pArr[min_index] = temp;
        }
    }

    
    
    // 输出排序后的数组
    cout << "排序后的数组: ";
    for (int i = 0; i < size; i++) 
    {
        cout << pArr[i];
        if (i < size - 1) {
            cout << ", ";
        }

    
    }
    cout << endl;

    int difference = pArr[size - 1] - pArr[0]; // 最大值减最小值
    cout << "数组的最大值减最小值是: " << difference << endl;

    delete[] pArr; 
    return 0;
}