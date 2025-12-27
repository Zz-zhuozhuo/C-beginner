#include<stdio.h>

int main()
{
    int i, sum = 0;
    int sign = 1;  
    
    for(i = 1; i <= 101; i = i + 2) 
    {
        sum = sum + sign * i;  
        sign = -sign;          
    }
    
    printf("1-3+5-7+......-99+101 = %d\n", sum);
    return 0;
}
