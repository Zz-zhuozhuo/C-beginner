#include <stdio.h>

int main()
{
    int a;
    int result = 0;

    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        result = a * i;
        printf("%d x %d  = %d\n", i, a, result);
    }
    return 0;
}