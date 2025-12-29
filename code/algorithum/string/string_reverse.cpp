#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;


// 反转字符串算法，反转字符串的每一个字符
// 方法1：使用while循环（双指针）
void reverseString(string &s) {
    // 方法1：使用while循环（双指针）
    int start = 0;           // 起始位置
    int end = s.length() - 1;    // 结束位置
    
    while (start < end) {
        // 交换开头和结尾的字符
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        // 向中间移动
        start++;
        end--;
    }
}

int main() {

    // 设置控制台输出的编码为UTF-8，解决中文乱码问题
    SetConsoleOutputCP(65001);
    // 测试用例1
    string str1 = "hello";
    cout << "测试1 - 反转前: " << str1 << endl;
    
    reverseString(str1);
    cout << "测试1 - 反转后: " << str1 << endl << endl;
    
    // 测试用例2
    string str2 = "Hannah";
    cout << "测试2 - 反转前: " << str2 << endl;
    
    reverseString(str2);
    cout << "测试2 - 反转后: " << str2 << endl << endl;
    
    // 测试用例3 - 用户输入
    string str3;
    cout << "请输入一个字符串: ";
    cin >> str3;
    
    cout << "你输入的字符串: " << str3 << endl;
    
    reverseString(str3);
    cout << "反转后的字符串: " << str3 << endl;
    
    return 0;
}