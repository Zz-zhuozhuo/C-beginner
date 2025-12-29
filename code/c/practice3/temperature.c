#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    float kilogramme;
    float T0;
    float T1;
    float Q;

    printf("请输入水的质量：");
    scanf("%f", &kilogramme);

    printf("请输入水的初始摄氏度温度：");
    scanf("%f", &T0);

    printf("请输入水的最终摄氏度温度：");
    scanf("%f", &T1);

    Q = kilogramme * (T1 - T0) * 4184;
    printf("水的能量为%.2f", Q);

    return 0;
}