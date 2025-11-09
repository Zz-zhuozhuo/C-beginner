#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//使用循环判断字符串中是否有重复的字符，如果有，返回第一个不重复的字符的索引，否则返回-1
int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    string s;
    cout << "请输入字符串: ";
    cin >> s;
    
    // 遍历每个字符
    for (int i = 0; i < s.length(); i++) {
        bool isUnique = true;  // 假设当前字符是唯一的
        
        // 检查当前字符是否在其他位置出现
        for (int j = 0; j < s.length(); j++) {
            // 如果不是同一个位置且字符相同，说明不唯一
            if (i != j && s[i] == s[j]) {
                isUnique = false;
                break;  // 发现重复，退出内层循环
            }
        }
        
        // 如果当前字符是唯一的，返回索引
        if (isUnique) {
            cout << "第一个不重复字符的索引: " << i << endl;
            return 0;
        }
    }
    
    // 如果所有字符都重复，返回-1
    cout << "没有不重复的字符: " << -1 << endl;
    return 0;
}