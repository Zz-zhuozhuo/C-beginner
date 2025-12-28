#include <stdio.h>
#include <windows.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    int arr[10];

    printf("请输入10个整数:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 9; i++)
    {
        int min_index = i;

        for(int j = i + 1; j < 10; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
                swap(&arr[i], &arr[min_index]);
            }
        }
    }

    printf("排序后的数组:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}