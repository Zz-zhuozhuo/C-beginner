#include <stdio.h>
#include <windows.h>

// 判断一个数是否是素数
int isPrime(int n) {
    int i;
    
    // 小于2的数都不是素数
    if (n < 2) {
        return 0;
    }
    
    // 检查从2到n-1的所有数
    for (i = 2; i < n; i++) {
        // 如果n能被i整除，说明n不是素数
        if (n % i == 0) {
            return 0;
        }
    }
    
    // 如果没有找到能整除n的数，说明n是素数
    return 1;
}

int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);
    int num;
   
    
    // 用户输入测试
    printf("\n请输入一个整数：");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d 是素数\n", num);
    } else {
        printf("%d 不是素数\n", num);
    }
    
    return 0;
}