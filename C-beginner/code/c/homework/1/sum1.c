#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    
    int a, b, sum;
    printf("请输入a和b:\n");
    scanf("%d%d", &a, &b);  
    sum = a + b;           
    printf("sum=%d\n", sum);
    return 0;
}