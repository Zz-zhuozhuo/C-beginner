#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{

    SetConsoleOutputCP(65001); // 解决中文乱码
    
    double r = 0.07;  
    int n = 10;       
    double p;         

    p = pow(1 + r, n);
    
    
    double growth_percentage = (p - 1) * 100;
    
    printf("与现在相比增长了 %.2f%%\n", growth_percentage);
    
    return 0;
}