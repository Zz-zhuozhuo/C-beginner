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
    int i;
    printf("请输入三个整数：\n");
    for(i = 0; i < 3;i++)
    {
        scanf("%d", &arr[i]);
    }
    

    for (i = 0; i < 2; i++)
    {
        int j;
        for(j = 0; j < 2 - i;j++)
        {
            if (arr[j] > arr[j + 1])
            swap(&arr[j], &arr[j + 1]);
        }
    }


    for(i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
