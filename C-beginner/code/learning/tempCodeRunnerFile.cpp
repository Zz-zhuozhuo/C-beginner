#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int * pArr = new int[10]{3, 5 , 1, 11, 99, 66, 22, 2, 8, 6};
    int min; // 最小值
    int min_index; // 最小值的索引

    for (int i = 0; i < 9; i++) // 遍历数组，找出本次的最小值并且放入开头位置
    {
        for (int j = i; j < 10; j++)
        {
            if (j == i) // 初始化最小值
            {
                min = pArr[j]; //将当前值赋值给最小值
                min_index = j; //将当前索引赋值给最小值的索引
            }

            if (pArr[j] < min) // 找到更小的值
            {
                min = pArr[j];
                min_index = j;
            }
        }

        // 交换最小值和第一个元素
        int temp = pArr[i];
        pArr[i] = pArr[min_index];
        pArr[min_index] = temp;
    }

    // 输出排序后的数组
    for (int i = 0; i < 10; i++)
    {
        cout << pArr[i] << "，";
    }

    delete[] pArr; // 释放内存
    return 0;
}