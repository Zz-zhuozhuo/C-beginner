#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(65001);  // 解决中文乱码
    float x, y;
    
    printf("请输入 x 的值: ");
    scanf("%f", &x);
    
    if (x < 1)
    {
        y = x;
    }
    else if (x < 10)  // 这里隐含了 x >= 1
    {
        y = 2 * x - 1;
    }
    else  // x >= 10
    {
        y = 3 * x - 11;
    }
    
    printf("y = %.2f\n", y);
    
    return 0;
}