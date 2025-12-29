#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    char guess_1;
    printf("请输入星期首字母：");
    scanf(" %c", &guess_1);

    if(guess_1 == 'M' || guess_1 == 'm')
    {
        printf("Monday");
    }

    
    
    else if(guess_1 == 'T' || guess_1 == 't')
    {
        
        printf("请输入第二个字母：");
        char guess_2;
        scanf(" %c", &guess_2);

        if(guess_2 == 'U' || guess_2 == 'u')
        {
            printf("Tuesday");
        }

        else if(guess_2 == 'H' || guess_2 == 'h')
        {
            printf("Thursday");
        }

        else
        {
            printf("Illegal input!\n");
        }
    }


    
    else if(guess_1 == 'W' || guess_1 == 'w')
    {
        printf("Wednesday");
    }


    else if(guess_1 == 'F' || guess_1 == 'f')
    {
        printf("Friday");
    }

    
    else if(guess_1 == 'S' || guess_1 == 's')
    {
        printf("请输入第二个字母：");
        char guess_2;
        scanf(" %c", &guess_2);

        if(guess_2 == 'A' || guess_2 == 'a')
        {
            printf("Saturday");
        }

        else if(guess_2 == 'U' || guess_2 == 'u')
        {
            printf("Sunday");
        }

        else
        {
            printf("Illegal input!\n");
        }
    }


    else
    {
        printf("Illegal input!\n");
    }

    return 0;
}