#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);  // 解决中文乱码
    int arr[10];  // 原始数组
    int result[10]; // 存放结果的数组
    int i, j, k;
    int count = 0;  // 结果数组元素个数
    
    // 初始化原始数组
    
    printf("请输入10个整数：\n");
    

    for(i = 0; i < 10; i++) {
        printf("请输入第%d个整数：", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    printf("\n原始数组：");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // 遍历原始数组，删除重复元素
    for(i = 0; i < 10; i++) {
        int isDuplicate = 0;  // 标记是否为重复元素，0表示不重复
        
        // 检查当前元素在结果数组中是否已经存在
        for(j = 0; j < count; j++) {
            if(arr[i] == result[j]) {
                isDuplicate = 1;  // 找到重复元素
                break;
            }
        }
        
        // 如果不是重复元素，就添加到结果数组中
        if(isDuplicate == 0) {
            result[count] = arr[i];
            count++;  // 结果数组元素个数加1
        }
    }
    
    // 输出去重后的结果
    printf("去重后的数组：");
    for(i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}