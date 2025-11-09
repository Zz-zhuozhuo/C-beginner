#include <iostream>
#include <windows.h>
#include <ctype.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码问题

    string name;
    cout << "请输入字符串：";
    cin >> name; // 获取输入的字符串

    // 将计数器移到循环外面，避免每次循环重置
    int supper = 0; // 大写字母个数
    int lower = 0;  // 小写字母个数
    int digit = 0;  // 数字个数
    int other = 0;  // 其他字符个数
            
    
    // 遍历字符串的每个字符
    for (int i = 0; i < name.length(); i++)
    {
        char c = name[i];
        
        
        // 检查当前字符是否为大写字母、小写字母、数字或其他
        if (isupper(c))
        {
            supper++;
        }
        else if (islower(c))
        {
            lower++;
        }
        else if (isdigit(c))
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    
    // 输出统计结果
    cout << "统计结果：" << endl;
    cout << "大写字母个数：" << supper << endl;
    cout << "小写字母个数：" << lower << endl;
    cout << "数字个数：" << digit << endl;
    cout << "其他字符个数：" << other << endl;
        
    return 0;
}