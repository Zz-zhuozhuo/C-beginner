#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

//使用计数数组来统计每个字符出现的次数，然后再遍历一次数组，找到第一个出现次数为1的字符的索引
int main() {

    SetConsoleOutputCP(65001);  // 解决中文输出乱码

    string s;
    cout << "请输入字符串: ";
    cin >> s;
    
    int count[26] = {0};  // 26个小写字母的计数器
    
    // 第一次遍历：统计每个字符出现的次数
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;  // 'a'对应0，'b'对应1，...
    }
    
    // 第二次遍历：找到第一个出现次数为1的字符
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i] - 'a'] == 1) {
            cout << "第一个不重复字符的索引: " << i << endl;
            return 0;
        }
    }
    
    cout << "没有不重复的字符: " << -1 << endl;
    return 0;
}