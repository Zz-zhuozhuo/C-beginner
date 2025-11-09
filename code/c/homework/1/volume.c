#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);  // 解决中文乱码
    float l, w, h;  // 长、宽、高
    
    printf("请输入长 宽 高: ");
    scanf("%f %f %f", &l, &w, &h);
    
    printf("体积 = %.2f\n", l * w * h);
    
    return 0;
}