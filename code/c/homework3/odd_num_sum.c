#include<stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    int n, sum = 0;
    for(n=1;n<=20; n=n+2)
    {
        sum = sum + n;
    }
    printf("20以内的奇数和是sum=%d\n", sum);
    return 0;
}
