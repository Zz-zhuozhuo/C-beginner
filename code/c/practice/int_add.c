#include <stdio.h>
#include <windows.h>

int main()
{
    // 解决中文乱码问题
    SetConsoleOutputCP(65001);

    int A;
    int N;
    printf("请输入两个整数A和N，以空格分隔：");
    scanf("%d %d", &A, &N);

    while (N <= 0)
    {
        printf("N必须是正整数，请重新输入N：");
        scanf("%d", &N);
    }

    int sum = 0;
    int i;
    int frequency = 0;
    int condition = 1;
    
    for (i = A; condition; i++)
    {
        sum += i;
        frequency++;


        if (frequency == N)
        {
            condition = 0;
        }
    }

    printf("和为：%d\n", sum);

    return 0;
}

    