#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码
    // C语言使用动态数组较麻烦，故本题不做讨论
    char teamName[100];
    
    // 从标准输入读取战队的名称
    printf("请输入战队的名称: ");
    scanf("%s", teamName);
   
    // 输出结果
    printf("Hello,%s!\n", teamName);
    
    return 0;
}