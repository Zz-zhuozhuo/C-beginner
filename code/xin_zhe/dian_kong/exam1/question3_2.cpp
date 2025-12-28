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

   


    string str0;
    cout << "请输入一个字符" << endl;
    cin >> str0;
    
    string str1;

    string str2;
    str2 = str1;

    //逐个移除单个字符，并且判断移除字符后的字符串是否是回文数
    for (int i = 0; i < str0.length(); i++) 
    {
    
        for (int j = 0; j < str0.length(); j++) 
        {   
            remove s[j]
            str1 = str0;
        }
    }
    
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




