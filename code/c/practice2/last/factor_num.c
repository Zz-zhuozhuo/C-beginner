#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int num;
    int sum = 0;
    printf("请输入数字：");
    scanf("%d", &num);

    int i = 1;
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}