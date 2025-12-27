#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    
    //总共排序的次数为元素个数-1
    for (int i = 0; i < 9 - 1; i++) 
    {
        //每轮对比次数 = 数组元素个数 - 已排序元素个数 - 1
        for (int j = 0; j < 9 - i - 1; j++) 
        {
            //如果当前元素大于后面的元素，则交换位置
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    
    //输出排序后的数组
    for (int i = 0; i < 9; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0; 
}