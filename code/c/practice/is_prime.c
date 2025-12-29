#include <stdio.h>
#include <windows.h>

int main()
    {
        SetConsoleOutputCP(65001);

        int num;
        printf("请输入一个正整数：");
        scanf_s("%d", &num);

        for(int i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                printf("%d 不是素数。\n", num);
                return 0;
            }

            
            else if(i == num / 2)
            {
                printf("%d 是素数。\n", num);
                return 0;
            }
        }



    }
