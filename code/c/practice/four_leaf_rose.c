#include <stdio.h>
#include <windows.h>

int is_rose(int n)
{
    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100 % 10;
    int thousands = n / 1000 % 10;

    int sum = units * units * units * units +
              tens * tens * tens * tens +
              hundreds * hundreds * hundreds * hundreds +
              thousands * thousands * thousands * thousands;
    return sum;
}

int main()
{
    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    for(int i = 1000; i <= 9999; i++)
    {
        int sum = is_rose(i);

        if (sum == i)
        {
            printf("%d 是四叶玫瑰数\n", i);
        }
    }
    
    return 0;
}
    