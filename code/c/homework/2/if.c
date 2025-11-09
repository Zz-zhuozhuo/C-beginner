#include<stdio.h>
#include<windows.h>
int main()    
{ 
    SetConsoleOutputCP(65001);
    
    int x, y, r1, r2;
    scanf("%d,%d", &x, &y);  
    
    if(x == 0 || y == 0)     
    {
        printf("Input Error!\n");
    }
    else
    {
        if(x > y)
        {
            r1 = x / y;      
            r2 = x % y;
        }
        else
        {
            r1 = y / x;
            r2 = y % x;
        }
        printf("商=%d,余数=%d\n", r1, r2); 
    }
    return 0;                
}