#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码


    // 获取输入
    char str[1000];
    fgets(str, 1000, stdin);
    int len = strlen(str) - 1; // 除去字符串尾\n的干扰

    // 检查变量名
    if (str[0] == 'v')
    {
        for (int i = 2; i < len; i++)
        {
            // 不是小写字母，         不是数字，          不是下划线
            if (!islower(str[i]) && !isdigit(str[i]) && str[i] != '_')
            {
                printf("不规范");
                return 0;
            }
        }
        // 开头是数字
        if (isdigit(str[2]))
        {
            printf("不规范");
            return 0;
        }
    }

    // 检查函数名
    else if (str[0] == 'f')
    {
        for (int i = 2; i < len; i++)
        {
            // 不是字母数字
            if (!isalnum(str[i]))
            {
                // 不是下划线
                if (str[i] != '_')
                {
                    printf("不规范");
                    return 0;
                }
                // 下划线后不是大写
                else if (!isupper(str[i + 1]) && str[i + 1] != '\n')
                {
                    printf("不规范");
                    return 0;
                }
            }
        }

        // 开头是小写 或 数字
        if (islower(str[2]) || isdigit(str[2]))
        {
            printf("不规范");
            return 0;
        }
    }

    // 检查通过
    printf("规范");
    return 0;
}