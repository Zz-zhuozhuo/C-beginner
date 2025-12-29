#include <stdio.h>
#include <string.h>  // 包含strcpy函数的头文件
#include <windows.h>


int main() {
    //解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    char source[] = "Hello, World!";
    char destination[50];  // 目标数组要足够大
    
    // 使用strcpy复制字符串
    strcpy(destination, source);
    
    printf("源字符串: %s\n", source);
    printf("目标字符串: %s\n", destination);
    
    return 0;
}