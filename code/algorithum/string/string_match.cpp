#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    // 声明两个字符串
    string haystack, needle;
    
    // 输入两个字符串
    cout << "请输入主串: ";
    cin >> haystack;

    cout << "请输入要查找的子串: ";
    cin >> needle;
    
    int haystackLen = haystack.length();  // 主串长度
    int needleLen = needle.length();      // 子串长度
    
    // 如果子串比主串长，肯定找不到
    if (needleLen > haystackLen) {
        cout << -1 << endl;
        return 0;
    }
    
    
    //查找算法 查找算法 查找算法 查找算法 查找算法 查找算法 查找算法
    // 在主串中查找子串
    for (int i = 0; i <= haystackLen - needleLen; i++) {
        bool found = true;  // 假设从位置i开始匹配
        
        // 检查当前位置开始的子串是否匹配
        for (int j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) {
                found = false;  // 发现不匹配的字符
                break;          // 退出内层循环
            }
        }
        
        // 如果完全匹配，输出位置并结束
        if (found) {
            cout << i << endl;
            return 0;
        }
    }
    
    // 如果循环结束都没找到，返回-1
    cout << -1 << endl;
    return 0;
}