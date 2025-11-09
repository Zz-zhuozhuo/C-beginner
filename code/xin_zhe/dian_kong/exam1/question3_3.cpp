#include <iostream>
#include <string>
using namespace std;


void reverseString(string &s)
{

    int start = 0;           // 起始位置
    int end = s.length() - 1;    // 结束位置
    
    while (start < end)
    {
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
    string s;
    cout << "请输入字符串: ";
    cin >> s;
    
    int maxLength = 0;  // 最长回文子串长度
    
    // 遍历所有元素
    for (int start = 0; start < s.length(); start++)
    {
    
        int currentLength = 0;     // 当前子串长度
        
        // 扩展子串
        for (int end = start; end < s.length(); end++)
        {
            char currentChar = s[end];
            
            string currentChar2;
            currentChar2 = currentChar;
            
            //调用函数判断回文数
            reverseString(currentChar);

            if (currentChar == currentChar2)
            {
                cout << currentChar2 << endl;
            }
            
            else
            {
                cout << "false" << endl;
            }
                    
                    currentLength++;
                    
            // 更新最大长度
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }

            cout << "最长回文数字符子串的长度: " << maxLength << endl;
        }
    }
    
    

    return 0;
}