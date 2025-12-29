#include <iostream>
#include <string>
using namespace std;

int main() {
    string path;
    cout << "请输入路径: ";
    cin >> path;
    
    string result = "";  // 存储加密后的结果
    
    // 遍历路径中的每个字符
    for (int i = 0; i < path.length(); i++) {
        // 如果当前字符是点号，替换为空格
        if (path[i] == '.') {
            result += ' ';
        } else {
            // 否则保持原字符
            result += path[i];
        }
    }
    
    cout << "加密后的路径: " << result << endl;
    
    return 0;
}