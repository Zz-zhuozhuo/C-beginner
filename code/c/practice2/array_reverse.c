#include <stdio.h>
#include <windows.h>

void reverse(int arr[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    printf("请输入数组的大小: ");
    int size;
    scanf("%d", &size);

    int arr[100]; //假设数组最大大小为100
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}