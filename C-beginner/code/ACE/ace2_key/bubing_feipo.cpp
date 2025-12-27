#include <stdio.h>
#include <math.h>
int loop_restriction(long long num, int limit_num)
{
    int m = num % (2 * limit_num);
    if (m < -limit_num)
    {
        m += 2 * limit_num;
    }
    else if (m > limit_num)
    {
        m -= 2 * limit_num;
    }
    return m;
}
int main()
{
        long long D;
        scanf_s("%lld", &D);
        printf("%d", loop_restriction(D,180));
        return 0;
}