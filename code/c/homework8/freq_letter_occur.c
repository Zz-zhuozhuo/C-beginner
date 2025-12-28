#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {

    // 设置编码为UTF-8
    SetConsoleOutputCP(CP_UTF8);

    char str[1000];  // 存储输入的字符串
    int count[26] = {0};  // 26个计数器，对应26个字母
    
    // 输入字符串
    printf("请输入一行字符串: ");
    fgets(str, sizeof(str), stdin);
    
    // 统计每个字母出现的次数（不区分大小写）
    for(int i = 0; str[i] != '\0'; i++) {
        // 如果是大写字母
        if(str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;  // 统计到大写字母对应的位置
        }
        // 如果是小写字母
        else if(str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;  // 统计到小写字母对应的位置
        }
    }
    
    // 输出结果（只输出出现过的字母）
    printf("\n字母频率统计结果:\n");
    printf("字母\t次数\n");
    printf("---------------\n");
    
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            printf("%c/%c\t%d\n", 'a' + i, 'A' + i, count[i]);
        }
    }
    
    return 0;
}