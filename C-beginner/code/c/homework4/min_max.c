#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);  

    int w[8] = { 10, 20, 30, 40, 50, 60, 70, 80 };  
    int i;
    int min, max;

    
    
    // 初始化最小值和最大值
    min = w[0];
    max = w[0];
    
    // 找出数组中的最小值和最大值
    for(i = 1; i < 8; i++) {
        // 如果当前数比最小值还小，就更新最小值
        if(w[i] < min) {
            min = w[i];
        }
        // 如果当前数比最大值还大，就更新最大值
        if(w[i] > max) {
            max = w[i];
        }
    }
    
    // 输出结果
    printf("最小值是：%d\n", min);
    printf("最大值是：%d\n", max);
    
    return 0;
}