#include <stdio.h>

int main()
{
    double N;
    double r1 = 0.0036, r2 = 0.0225, r3 = 0.0198;
    
    printf("请输入存款金额: ");
    scanf("%lf", &N);
    
    double m1 = N * (1 + r1);
    double m2 = N * (1 + r2);
    double m3 = N * (1 + r3/2) * (1 + r3/2);
    
    printf("\n计算结果:\n");
    printf("1. 活期: %.2f元\n", m1);
    printf("2. 一年定期: %.2f元\n", m2);
    printf("3. 两次半年定期: %.2f元\n", m3);
    
    return 0;
}