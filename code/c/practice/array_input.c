#include <stdio.h>
#include <math.h>

int main()
{
    int * pArr = new int[10];

    int a;
    int b ;
    int i;

    scanf("%d", &a);

    for (i = 0; i <= 9; i++)
    {
        b = pow(2, i);
        pArr[i] = a * b;

        printf("pArr[%d] = %d\n", i, pArr[i]);

    }
    return 0;
}