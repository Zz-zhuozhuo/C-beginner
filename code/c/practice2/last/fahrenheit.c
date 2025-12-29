#include <stdio.h>
#include <windows.h>


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int choose;
    float F;
    float C;

    printf("输入华氏温度，请输入1。输入摄氏温度，请输入2：");
    scanf("%d", &choose);

    if(choose == 1)
    {
        printf("请输入华氏温度：");
        scanf("%f", &C);
        C = 5.0/9.0 * (F - 32);
        printf("转化为摄氏度：%.1f", C);
    }

    else if(choose == 2)
    {
        printf("请输入摄氏温度：");
        scanf("%f", &F);
        F = 9.0/5.0 * C + 32;
        printf("转化为华氏度：%.1f", F);
    }

    else
    {
        printf("输入错误，请重新输入！");
    };

    return 0;


}