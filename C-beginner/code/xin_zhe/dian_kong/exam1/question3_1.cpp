#include <iostream>
#include <windows.h>
using namespace std;

void reverseString(string &s)
{

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

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    string str1;
    cout << "请输入一个字符串: ";
    cin >> str1;
    
    string str2;
    str2 = str1;
    
    //调用函数判断
    reverseString(str1);

    if (str1 == str2)
    {
        cout << "true" << endl;
    }
    
    else
    {
        cout << "false" << endl;
    }

    return 0;
}




