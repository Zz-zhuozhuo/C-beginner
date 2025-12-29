#include <stdio.h>
#include <windows.h>
#include <string.h>  // 包含strlen函数的头文件

int main() {
    //解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    char str1[] = "Hello";
    char str2[] = "World!";
    char str3[] = "";
    
    printf("字符串 \"%s\" 的长度是: %lu\n", str1, strlen(str1));
    printf("字符串 \"%s\" 的长度是: %lu\n", str2, strlen(str2));
    printf("字符串 \"%s\" 的长度是: %lu\n", str3, strlen(str3));
    
    return 0;
}