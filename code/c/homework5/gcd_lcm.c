#include <stdio.h>
#include <windows.h>

// 函数声明
int gcd(int a, int b);      // 求最大公约数
int lcm(int a, int b);      // 求最小公倍数

int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    int num1, num2;
    
    // 从键盘输入两个整数
    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);
    
    // 调用函数并输出结果
    printf("最大公约数(GCD)是：%d\n", gcd(num1, num2));
    printf("最小公倍数(LCM)是：%d\n", lcm(num1, num2));
    
    return 0;
}

// 求最大公约数的函数（使用辗转相除法）
int gcd(int a, int b) {
    int temp;
    
    // 确保a是较大的数
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    // 辗转相除法
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    
    return a;
}

// 求最小公倍数的函数
int lcm(int a, int b) {
    // 最小公倍数 = 两数乘积 ÷ 最大公约数
    return (a * b) / gcd(a, b);
}