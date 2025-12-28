    #include <stdio.h>
    #include <windows.h>

    struct Date
    {
        int year;
        int month;
        int day;
    };

    int is_leap_year(int year)
    {
        if((year % 4 ==0 && year % 100 != 0) || (year % 100 ==0 && year % 400 == 0))
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }

    int main()
    {
        SetConsoleOutputCP(65001); //解决中文乱码

        struct Date date;
        
        printf("请输入年份：");
        scanf("%d", &date.year);

        printf("请输入月份：");
        scanf("%d", &date.month);

        printf("请输入日：");
        scanf("%d", &date.day);

        if (date.year <= 0 || date.month < 1 || date.month > 12 || date.day < 1 || date.day > 31)
        {
            printf("日期输入不合法！\n");
            return 1;
        }


        if(is_leap_year(date.year))
        {
            printf("%d年是闰年", date.year);
        }

        
        else
        {
            printf("%d年不是闰年", date.year);
        }

        return 0;

    }
