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

    int arr[3];
    printf("请输入3个整数:\n");

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    } 

    for(int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
        putchar(' ');
    }

    return 0;
}
