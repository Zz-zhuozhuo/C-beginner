#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 生成[min, max]范围内的随机整数
int random_int(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// 生成[0, 1)范围内的随机浮点数
double random_double() {
    return (double)rand() / RAND_MAX;
}

// 生成[min, max)范围内的随机浮点数
double random_double_range(double min, double max) {
    return min + (max - min) * random_double();
}

int main() {
    srand(time(NULL));
    
    printf("1-10之间的随机整数:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", random_int(1, 10));
    }
    printf("\n\n");
    
    printf("0-1之间的随机浮点数:\n");
    for(int i = 0; i < 5; i++) {
        printf("%.4f ", random_double());
    }
    printf("\n\n");
    
    printf("1.5-5.5之间的随机浮点数:\n");
    for(int i = 0; i < 5; i++) {
        printf("%.4f ", random_double_range(1.5, 5.5));
    }
    printf("\n");
    
    return 0;
}