#include <iostream> 
#include <windows.h> 
#include <string> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    string str;
    cout << "请输入字符串: ";
    getline(cin, str);
    
    string str_check;
    cout << "请输入查找的子字符串: ";
    getline(cin, str_check);
    

    // 计数
    int count = 0;
    //获取字符串长度
    int strLen = str.length();
    int checkLen = str_check.length();
    
    
    //查找子字符串,开始一个循环，循环变量i从0开始，直到strLen - checkLen。最大次数为strLen - checkLen + 1
    for (int i = 0; i <= strLen - checkLen; i++) 
    {
        // 检查是否匹配
        bool found = true;

        // // 循环用于比较从str的第i个字符开始的连续checkLen个字符是否与checkStr完全匹配。
        for (int j = 0; j < checkLen; j++) 
        {   
            
            //检查str中第i+j个字符是否等于checkStr中第j个字符。
            if (str[i + j] != str_check[j])
            {
                found = false;
                break;
            }
        }
        
        //如果found为true，说明从i开始的子串与checkStr完全匹配。
        if (found) 
        {
            count++;
        }
    }
    
    cout << "子字符串 '" << str_check << "' 出现了 " << count << " 次" << endl;
    
    return 0;
}