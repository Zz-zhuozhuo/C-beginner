#include <stdio.h>
#include <windows.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    
    SetConsoleOutputCP(65001); //解决中文乱码

    int a, b;
    printf("请输入a：");
    scanf("%d", &a);

    printf("请输入b：");
    scanf("%d", &b);

    swap(&a, &b);

    printf("交换后a = %d， b = %d", a, b);
    return 0;

}