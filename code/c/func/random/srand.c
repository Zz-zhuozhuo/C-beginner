#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 设置随机数种子为当前时间
    srand(time(NULL));
    
    // 生成随机数
    printf("随机数1: %d\n", rand());
    printf("随机数2: %d\n", rand());
    printf("随机数3: %d\n", rand());
    
    return 0;
}