#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码
    
    int x, y, z, temp;
    
    printf("请输入三个整数: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("原始值: x=%d, y=%d, z=%d\n", x, y, z);
    
    // 第一步：确保x是x和y中较大的
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
        printf("交换x和y后: x=%d, y=%d, z=%d\n", x, y, z);
    }
    
    // 第二步：确保x是三个数中最大的
    if (x < z)
    {
        temp = x;
        x = z;
        z = temp;
        printf("交换x和z后: x=%d, y=%d, z=%d\n", x, y, z);
    }
    
    // 第三步：确保y比z大
    if (y < z)
    {
        temp = y;
        y = z;
        z = temp;
        printf("交换y和z后: x=%d, y=%d, z=%d\n", x, y, z);
    }
    
    printf("\n最终结果（从大到小）: %d >= %d >= %d\n", x, y, z);
    
    return 0;
}