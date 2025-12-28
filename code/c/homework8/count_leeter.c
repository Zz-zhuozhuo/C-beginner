#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);  // 设置输出编码为UTF-8

    char str[1000];  // 存储输入的字符串
    int word_count = 0;  // 单词计数器
    int in_word = 0;  // 标记当前是否在单词中
    int i;
    
    printf("请输入一行字符: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("读取输入失败\n");
        return 1;
    }
    
    // 移除末尾的换行符
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    // 遍历字符串的每个字符
    for(i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            // 遇到空格，结束当前单词
            in_word = 0;
        } else {
            // 不是空格，如果是新单词的开始
            if (!in_word) {
                word_count++;
                in_word = 1;  // 标记进入单词
            }
        }
    }
    
    printf("单词数量: %d\n", word_count);
    
    return 0;
}