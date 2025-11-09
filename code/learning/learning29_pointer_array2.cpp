#include <iostream> 
#include <windows.h> 
using namespace std; 

void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{   
    SetConsoleOutputCP(65001);

    int *arr = new int[10]{ 5, 1, 4, 2, 8, 3, 7, 6, 9, 0 };
    int len = 10;  // 直接指定长度为10

    cout << "排序前: ";
    printArray(arr, len);
    
    bubbleSort(arr, len);
    
    cout << "排序后: ";
    printArray(arr, len);

    delete[] arr;

    return 0; 
}