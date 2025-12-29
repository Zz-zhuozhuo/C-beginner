#include <stdio.h>
#include <windows.h>
#include <string.h>  // 在某些编译器中需要包含此头文件

int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    char str[] = "Hello WORLD! 123";
    
    printf("原始字符串: %s\n", str);
    
    // 转换为小写
    strlwr(str);
    
    printf("转换后字符串: %s\n", str);
    
    return 0;
}