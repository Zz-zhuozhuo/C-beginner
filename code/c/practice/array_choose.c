#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[1000];
    
    // 输入数组元素
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 选择排序
    for(int i = 0; i < size - 1; i++)
    {
        int min_index = i;

        // 找到从i到size-1范围内最小元素的索引
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_index])
            {
               min_index = j;
            }
        }
        
        // 将找到的最小元素与第i个元素交换
        // 注意：这个交换应该在内层循环结束后执行
        if(min_index != i) // 优化：如果最小元素已经在正确位置，不需要交换
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    // 输出排序后的数组
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if(i < size - 1) // 在最后一个元素后不输出空格
            putchar(' ');
    }

    return 0;
}







































/*
#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[1000];
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size - 1; i++)
    {

        int min_index = i;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_index])
            {
               min_index = j;
            }

            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        putchar(' ');
    }

    return 0;
}
    */