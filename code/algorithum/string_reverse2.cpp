#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    string input;
    
    cout << "请输入字符串: ";
    getline(cin, input);  // 使用getline读取整行，包括空格
    
    string output = "";   // 最终结果
    string currentWord = "";  // 当前正在构建的单词
    
    // 从字符串末尾开始向前遍历
    for (int i = input.length() - 1; i >= 0; i--) {
        char currentChar = input[i];
        
        // 情况1：当前字符不是空格，是单词的一部分
        if (currentChar != ' ') {
            // 将字符加到单词的前面（因为是从右向左读）
            currentWord = currentChar + currentWord;
        }
        // 情况2：当前字符是空格，且currentWord不为空
        else if (currentWord != "") {
            // 说明一个单词结束了
            
            // 如果output不为空，需要先加空格再加单词
            if (output != "") {
                output = output + " " + currentWord;
            } 
            // 如果output为空，直接添加单词（这是第一个单词）
            else {
                output = currentWord;
            }
            
            // 清空currentWord，准备下一个单词
            currentWord = "";
        }
        // 情况3：当前字符是空格，且currentWord为空（连续空格），直接跳过
    }
    
    // 循环结束后，检查是否还有最后一个单词没处理
    if (currentWord != "") {
        if (output != "") {
            output = output + " " + currentWord;
        } else {
            output = currentWord;
        }
    }
    
    cout << "反转后的单词顺序: " << output << endl;
    
    return 0;
}