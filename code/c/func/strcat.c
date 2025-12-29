#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    char dest[20] = "Hello";
    char src[] = " World!";
    
    strcat(dest, src);
    printf("连接后的字符串: %s\n", dest); // 输出：Hello World!
    
    return 0;
}