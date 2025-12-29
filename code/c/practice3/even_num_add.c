#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int n;
    printf("请输入一个正整数：\n");
    scanf("%d", &n);

    int i;
    int sum = 0;
    for(i = 0; i <= n; i+=2)
    {
        sum += i;
    }

    printf("%.2f\n", (double)sum);

    return 0;
    
}