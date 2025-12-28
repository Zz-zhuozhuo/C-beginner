#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);  // 设置输出编码为UTF-8

    char input[1000];
    char words[100][100];
    int count = 0;
    int i, j = 0;
    
    printf("请输入句子: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // 去掉换行符
    
    // 处理字符串
    for(i = 0; input[i] != '\0'; i++) {
        // 如果当前字符是字母或数字，添加到单词
        if((input[i] >= 'a' && input[i] <= 'z') || 
           (input[i] >= 'A' && input[i] <= 'Z') ||
           (input[i] >= '0' && input[i] <= '9')) {
            words[count][j++] = input[i];
        }
        // 如果遇到分隔符，并且有单词，结束这个单词
        else if(j > 0) {
            words[count][j] = '\0';
            count++;
            j = 0;
        }
    }
    
    // 处理最后一个单词
    if(j > 0) {
        words[count][j] = '\0';
        count++;
    }
    
    // 倒序输出
    printf("倒排结果: ");
    for(i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if(i > 0) printf(" ");
    }
    printf("\n");
    
    return 0;
}