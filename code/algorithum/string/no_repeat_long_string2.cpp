#include <iostream>
#include <string>
using namespace std;

/*
滑动窗口算法：

思路：

- 维护一个滑动窗口，窗口左边界left和右边界right，窗口内字符不重复
- 遍历字符串s，对于每个字符s[right]，如果窗口内字符不重复，则移动窗口右边界right，并标记窗口内字符s[right]已使用
- 对于每个字符s[right]，如果窗口内字符重复，则移动窗口左边界left，直到窗口内字符不重复，并标记窗口内字符s[right]已使用
- 记录窗口内字符的最大长度，更新maxLength

时间复杂度：O(n)，n为字符串s的长度

空间复杂度：O(k)，k为字符集大小，k=256
*/
int main() {
    string s;
    cout << "请输入字符串: ";
    cin >> s;
    
    int maxLength = 0;
    int left = 0;  // 滑动窗口左边界
    bool used[256] = {false};
    
    for (int right = 0; right < s.length(); right++) {
        // 如果右边界字符重复，移动左边界直到不重复
        while (used[s[right]]) {
            used[s[left]] = false;
            left++;
        }
        
        // 标记当前字符已使用
        used[s[right]] = true;
        
        // 更新最大长度
        if (right - left + 1 > maxLength) {
            maxLength = right - left + 1;
        }
    }
    
    cout << "最长无重复字符子串的长度: " << maxLength << endl;
    return 0;
}