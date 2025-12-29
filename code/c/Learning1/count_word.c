#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    char string[1000];  // 用于存放字符串
    int i;              // 计数器，用于遍历字符串中的每个字符
    int word = 0;       // 用于判断是否开始了一个新单词的标志
    int num = 0;        // 用于统计单词数
    
    printf("请输入一行字符: ");
    fgets(string, sizeof(string), stdin);  // 读取一行输入，包括空格
    
    // 遍历字符串中的每个字符
    for(i = 0; string[i] != '\0'; i++) {
        // 如果当前字符不是空格
        if(string[i] != ' ' && string[i] != '\n' && string[i] != '\t') {
            // 如果之前不在单词中，说明遇到了新单词
            if(word == 0) {
                word = 1;  // 标记为在单词中
                num++;     // 单词计数加1
            }
        } else {
            // 遇到空格、换行或制表符，标记为不在单词中
            word = 0;
        }
    }
    
    printf("单词总数: %d\n", num);
    
    return 0;
}