#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    printf("请输入10个整数：");
    int arr[20];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < 9; i++)
    {
        int j;
        for(j = 0; j < 9 - i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("从大到小输出：");

    for(i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
        putchar(' ');
    }

    return 0;


}