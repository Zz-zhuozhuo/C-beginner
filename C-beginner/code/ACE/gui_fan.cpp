#include <iostream>
#include <windows.h>
#include <ctype.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    //定义输入类型
    string variable = "v";
    string function = "f";
    
    //要求用户输入类型
    string name_type;
    cout <<"检查变量名请输入v,检查函数名请输入f" << endl;
    cin >> name_type;

    //要求用户输入变量名或函数名
    string name;
    cout << "请输入变量名或函数名：" << endl;
    cin >> name;


    //检查变量名规范性
    
    if (name_type == variable)
    {
        const char* str = name.c_str();
        if (isdigit(str[0] ))
        {
        // 判断首字符是否为数字
        if (isdigit(str[0] ))
        {
            cout <<"不规范" << endl;
        }
        else
        {
            
            //遍历字符串的每个字符
            for (int i = 0; i < name.length(); i++)
            {
                char c = name[i];
                
                //检查当前字符是否为小写字母、数字或下划线
                if (islower(c) || isdigit(c) || c == '_')
                {
                    cout <<"规范" << endl;
                }
                else
                {
                    cout <<"不规范" << endl;
                    break;
                }
            }
        }
    }
        
        
        
    //检查函数名规范性

    if (name_type == function)
    {
       const char* str = name.c_str();
        
        
        
        // 判断开头是否为大写字母或下划线
        if (isupper(str[0]) || str[0] == '_' )
        {
             
            //遍历字符串的每个字符
            for (int i = 0; i < name.length(); i++)
            {
                char c = name[i];
                
                
                //检查当前字符是否为小写字母、数字或下划线
                if (islower(c) || isdigit(c) || c == '_')
                {
                    //cout <<"规范" << endl;
                }
                else
                {
                    cout <<"不规范" << endl;
                    break;
                }


                    // 检查当前字符是不是下划线，并且下一个字符是不是大写字母
                if (name[i] == '_')
                {
                    char nextChar = name[i + 1];
                    if (nextChar >= 'A' && nextChar <= 'Z')
                    {
                        // 合规，下划线后跟大写字母
                    }
                    else
                    {
                        cout << "不规范" << endl;
                        break;
                    }
                }

                    //检查当前字符是否为字母、数字或下划线
                if (isalpha(c) || isdigit(c) || c == '_')
                {
                    cout <<"规范" << endl;
                }
                else
                {
                    cout <<"不规范" << endl;
                    break;
                }
            }
        }
        else        
        {
            cout << "不规范" << endl;
        }
    }
    return 0;
}                
    

        
        
                
                  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*
        
        // 检查当前字符是不是下划线，并且下一个字符是不是大写字母
                if (name_type[i] == '_')
                 {
                    char nextChar = name_type[i + 1];
                    if (nextChar >= 'A' && nextChar <= 'Z')
                    {}
                    else
                    {
                        cout << "不规范" << endl;
                        break;
                    }
                }

                    //检查当前字符是否为字母、数字或下划线
                if (isalpha(c) || isdigit(c) || c == '_')
                {
                    cout <<"规范" << endl;
                }
                else
                {
                    cout <<"不规范" << endl;
                    break;
                }




                
            
        //检查字符类型   
            cout << "字符 '" << c << "' : ";       
            if (isalpha(c)) 
            cout << "字母 ";
            
            if (isdigit(c))
            cout << "数字 ";
        
            if (isspace(c)) 
            cout << "空格 ";
            
            if (ispunct(c)) 
            cout << "标点 ";
            
            if (isalnum(c))
            cout << "字母或数字 ";
            
            cout << endl;
        }
        
        
        
        string ch;
        cout << "请输入一个字符串：";
        // 获取输入的字符串使用下标遍历
        cin >> ch;
        string ch;
        

        // 获取输入的字符串使用下标遍历
        for (int i = 0; i < ch.length(); i++)
        {
            char c = ch[i];
            
            
        //检查字符类型   
            cout << "字符 '" << c << "' : ";       
            if (isalpha(c)) 
            cout << "字母 ";
            
            if (isdigit(c))
            cout << "数字 ";
        
            if (isspace(c)) 
            cout << "空格 ";
            
            if (ispunct(c)) 
            cout << "标点 ";
            
            if (isalnum(c))
            cout << "字母或数字 ";
            
            cout << endl;
        }


*/


