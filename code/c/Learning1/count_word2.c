#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码问题

    char string[81];
    int i, num = 0, word = 0;
    char c;
    
    printf("请输入一个字符串: ");
    // 使用fgets替代gets，更安全
    fgets(string, sizeof(string), stdin);
    
    // fgets会读取换行符，我们可以去除它
    for(i = 0; string[i] != '\0'; i++) {
        if(string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
    
    // 统计单词
    for(i = 0; (c = string[i]) != '\0'; i++) {
        if(c == ' ') {
            word = 0;
        } else if(word == 0) {
            word = 1;
            num++;
        }
    }
    
    printf("There are %d words in this line.\n", num);
    return 0;
}