#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    string mainStr;  // 主串
    string subStr;   // 子串
    
    
    cout << "请输入主串：";
    cin >> mainStr;

    
    cout << "请输入子串：";
    cin >> subStr;
    
    
    int mainLen = mainStr.length();  
    int subLen = subStr.length();    
    
    bool found = false;       
    
    int position = 0;         // 找到的位置
    
    // 在主串中查找子串
    for (int i = 0; i <= mainLen - subLen; i++)
    {
        bool match = true;
        
        // 检查从位置i开始的子串是否匹配
        for (int j = 0; j < subLen; j++)
        {
            if (mainStr[i + j] != subStr[j])
            {
                match = false;  // 发现不匹配
                break;
            }
        }
        
        
        // 如果完全匹配
        if (match)
        {
            found = true;
            position = i + 1;  // 位置从1开始计数
            break;
        }
    }
    
    
    if (found)
    {
        cout << "子串在主串第" << position << "位首次出现" << endl;
    } 
    
    
    
    else
    {
        cout << "子串未在主串中出现" << endl;
    }
    
    return 0;
}