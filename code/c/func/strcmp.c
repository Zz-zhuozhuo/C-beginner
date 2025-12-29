#include <stdio.h>
#include <string.h>  // 包含strcmp函数的头文件
#include <windows.h>

int main() {
    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";
    char str4[] = "apple";
    char str5[] = "Apple";  // 注意首字母大写
    
    // 比较相同字符串
    //str1 == str2, 所以返回0
    int result1 = strcmp(str1, str2);
    printf("比较 \"%s\" 和 \"%s\": %d\n", str1, str2, result1);
    
    // 比较不同字符串
    //str1 < str3, 所以返回-1
    int result2 = strcmp(str1, str3);
    printf("比较 \"%s\" 和 \"%s\": %d\n", str1, str3, result2);
    
    // 比较相同字符串（另一个例子）
    //str1 == str4, 所以返回0
    int result3 = strcmp(str1, str4);
    printf("比较 \"%s\" 和 \"%s\": %d\n", str1, str4, result3);
    
    // 比较大小写不同的字符串
    //str1 > str5, 所以返回1
    int result4 = strcmp(str1, str5);
    printf("比较 \"%s\" 和 \"%s\": %d\n", str1, str5, result4);
    
    return 0;
}