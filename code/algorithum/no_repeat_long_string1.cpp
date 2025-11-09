#include <iostream>
#include <string>
using namespace std;

//使用双重循环，遍历所有可能的起始位置，然后从该位置开始扩展子串，记录字符是否出现过，并更新最大长度
/*双重循环检查：
外层循环：选择子串的起始位置

内层循环：从起始位置开始向右扩展子串

字符标记：使用数组记录哪些字符已经出现过

遇到重复：立即停止当前子串的扩展，并开始下一个子串的扩展

更新最大长度：记录当前子串的长度，并更新最大长度
*/
int main() {
    string s;
    cout << "请输入字符串: ";
    cin >> s;
    
    int maxLength = 0;  // 最长无重复子串的长度
    
    // 遍历所有可能的起始位置
    for (int start = 0; start < s.length(); start++) {
        bool used[256] = {false};  // 记录字符是否出现过（ASCII字符）
        int currentLength = 0;     // 当前子串长度
        
        // 从start开始扩展子串
        for (int end = start; end < s.length(); end++){
            char currentChar = s[end];
            
            // 如果当前字符已经出现过，结束当前子串
            if (used[currentChar]) {
                break;
            }
            
            // 标记当前字符已使用，增加长度
            used[currentChar] = true;
            currentLength++;
            
            // 更新最大长度
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
    }
    
    cout << "最长无重复字符子串的长度: " << maxLength << endl;
    
    return 0;
}