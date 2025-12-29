#include <stdio.h>
#include <windows.h>

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    int item;
    printf("请输入第几项：");
    scanf("%d", &item);
    
    if(item == 0)
    {
        printf("第一项为：%d\n", arr[0]);
    }

    if(item == 1)
    {
        printf("第二项为：%d\n", arr[1]);
    }
    

    int n;
    for(n = 2; n <= item; n++)
    {
        arr[n] = arr[n - 1] + arr[n - 2];
        printf("%d", arr[n]);
        putchar(' ');

    }


    return 0;
}

