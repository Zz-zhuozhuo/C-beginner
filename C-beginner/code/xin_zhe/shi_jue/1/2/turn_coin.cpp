#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{

    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    string start;   // 初始状态
    string target;  // 目标状态
    
    // 读取输入
    cout << "请输入初始状态：" << endl;
    cin >> start;

    cout << "请输入目标状态：" << endl;
    cin >> target;
    
    int length = start.length();  
    int steps = 0;// 操作步数
    
    // 使用指针遍历字符串
    char *ptr1 = &start[0];    
    char *ptr2 = &target[0];   
    
    // 从左到右比较，发现不同就翻转
    for (int i = 0; i < length - 1; i++)
    {
        
        
        // 如果当前位置的硬币状态不同
        if (*(ptr1 + i) != *(ptr2 + i))
        {
            
            
        
            // 翻转当前硬币
            if (*(ptr1 + i) == '*')
            {
                *(ptr1 + i) = 'o';
            } else {
                *(ptr1 + i) = '*';
            }
            
            
            
            // 翻转下一个硬币
            if (*(ptr1 + i + 1) == '*')
            {
                *(ptr1 + i + 1) = 'o';
            } else {
                *(ptr1 + i + 1) = '*';
            }
            
            
            
            steps++; 
        }
    }
    
    cout << "操作步数：" << steps << endl;
    
    return 0;
}