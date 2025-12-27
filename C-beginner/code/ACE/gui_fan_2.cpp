#include <iostream>
#include <windows.h>
#include <ctype.h>  
#include <string>  

using namespace std;

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码问题

    // 定义输入类型
    string variable = "v";
    string function = "f";
    
    // 要求用户输入类型
    string name_type;
    cout << "检查变量名请输入v, 检查函数名请输入f" << endl;
    cin >> name_type;

    // 要求用户输入变量名或函数名
    string name;
    cout << "请输入变量名或函数名：" << endl;
    cin >> name;

    // 判断变量类型
    if (name_type == variable)
    {
       
        
        // 判断首字符是否为数字
        if (isdigit(name[0]))
        {
            cout << "不规范" << endl;
        }
        else
        {
            bool isValid = true;
            
            // 遍历字符串的每个字符
            for (int i = 0; i < name.length(); i++)
            {
                char c = name[i];
                
                // 检查当前字符是否为小写字母、数字或下划线
                if (!islower(c) && !isdigit(c) && c != '_')
                {
                    isValid = false;
                    cout << "不规范" << c << endl;
                    break;
                }
            }
            
            if (isValid) {
                cout << "规范" << endl;
            }
        }
    }
    // 判断类型
    else if (name_type == function)
    {
        if (name.empty()) {
            cout << "不规范" << endl;
            return 0;
        }

        const char* str = name.c_str();
        
        // 判断开头是否为大写字母或下划线
        if (isupper(str[0]) || str[0] == '_')
        {
            bool isValid = true;
            
            // 遍历字符串的每个字符
            for (int i = 0; i < name.length(); i++)
            {
                char c = name[i];
                
                // 检查当前字符是否为字母、数字或下划线
                if (!isalpha(c) && !isdigit(c) && c != '_')
                {
                    isValid = false;
                    cout << "不规范" << c << "'" << endl;
                    break;
                }
                
                // 检查下划线后是否跟大写字母
                if (c == '_' && i + 1 < name.length())
                {
                    char nextChar = name[i + 1];
                    if (!isupper(nextChar))
                    {
                        isValid = false;
                        cout << "不规范" << endl;
                        break;
                    }
                }
            }
            
            if (isValid) {
                cout << "规范" << endl;
            }
        }
        else        
        {
            cout << "不规范" << endl;
        }
    }
    else
    {
        cout << "错误：请输入v或f" << endl;
    }
    
    return 0;
}