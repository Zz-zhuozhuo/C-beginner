#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 手动实现降序排序（选择排序：每次选最大值放到当前头部）
void sortDescending(float arr[], int size) {
    // 外层循环：控制“当前要确定最大值的位置”（从第0位到第size-2位）
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i; // 假设当前位置的元素是最大值，记录其索引
        // 内层循环：找i之后的最大值索引
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) { // 降序：若j位置元素更大，更新maxIndex
                maxIndex = j;
            }
        }
        // 交换“当前位置i”和“最大值位置maxIndex”的元素
        if (maxIndex != i) {
            float temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    int K;
    // 初始化随机数种子（确保每次运行生成不同随机数）
    srand((unsigned int)time(NULL));

    // 1. 输入K并验证范围（10~20，使用while循环）
    printf("请输入数组大小K（范围：10~20）：");
    scanf("%d", &K);
    while (K < 10 || K > 20) {
        printf("K值非法！请重新输入10~20之间的整数：");
        scanf("%d", &K);
    }

    // 2. 动态分配浮点数组内存（避免栈溢出，用完释放）
    float* arr = (float*)malloc(K * sizeof(float));
    if (arr == NULL) { // 检查内存分配是否成功
        printf("内存分配失败！程序退出。\n");
        return 1;
    }

    // 3. 生成98.0~102.0之间的随机浮点数
    printf("\n1. 随机生成的原始数组（保留2位小数）：\n");
    for (int i = 0; i < K; i++) {
        // 公式：min + (max - min) * (rand() / RAND_MAX) → 确保范围在98~102
        arr[i] = 98.0f + (102.0f - 98.0f) * ((float)rand() / RAND_MAX);
        printf("%.2f  ", arr[i]);
        // 每5个元素换行，优化输出格式
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }

    // 4. 手动降序排序（调用自定义排序函数）
    sortDescending(arr, K);

    // 5. 筛选：跳过前2个（最高值）、跳过最后2个（最低值）
    int start = 2;          // 剩余元素的起始索引
    int end = K - 3;        // 剩余元素的结束索引（K-1是最后一个元素，减2得倒数第3个）
    int remainCount = end - start + 1; // 剩余元素的个数
    float sum = 0.0f;       // 剩余元素的总和

    // 6. 计算剩余元素的总和，并打印筛选后的数组
    printf("\n2. 降序排序后，移除最高2个和最低2个元素的剩余数组：\n");
    for (int i = start; i <= end; i++) {
        sum += arr[i];
        printf("%.2f  ", arr[i]);
        if ((i - start + 1) % 5 == 0) { // 每5个元素换行
            printf("\n");
        }
    }

    // 7. 计算并打印平均值
    float average = sum / remainCount;
    printf("\n3. 剩余元素的平均值（保留2位小数）：%.2f\n", average);

    // 8. 释放动态分配的内存（避免内存泄漏）
    free(arr);
    arr = NULL; // 置空指针，避免野指针

    return 0;
}
