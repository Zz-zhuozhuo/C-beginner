#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int a, b, c;
    printf("请输入三个整数，空格分开：");
    scanf("%d %d %d", &a, &b, &c);

    int max;
    if(a > b)
    {
        if(a > c)
        {
            max = a;
        }

        else
        {
            max = c;
        }
    }

    else
    {
        if(b > c)
        {
            max = b;
        }

        else
        {
            max = c;
        }
    }

    printf("%d", max);

    return 0;
}