#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    long int multiple = 1;
    int num;

    printf("请输入数字：");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        long int i = num;
        for(i = num; i >= 2; i-=2)
        {
            multiple *= i;
        }

        printf("%d", multiple);

    }

    if(num % 2 != 0)
    {
        long int i = num;
        for(i = num; i >= 1; i-=2)
        {
            multiple *= i;
        }

        printf("%d", multiple);

    }

    return 0;
}
