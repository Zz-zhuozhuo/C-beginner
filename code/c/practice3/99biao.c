#include <stdio.h>

int main()
{
    int i;
    for(i = 1; i <= 9; i++)
    {
        int j;
        int outcome;
        printf("\n");
        for(j = 1; j <= i; j++)
        {
            outcome = i * j;
            printf("%d x %d = %d\t", j, i, outcome);
        }

    }
    return 0;
}