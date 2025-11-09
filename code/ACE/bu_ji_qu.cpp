#include <iostream> 
#include <windows.h> 
#include <string> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int a , b;
    cout << "请输入坐标(a,b): ";
    cin >> a >> b;
    
   // cout << "你输入的坐标是(" << a << "," << b << ")" << endl;
    int size;
    
    cout << "你想输入几个字符? ";
    cin >> size;
    
    char moves[size];  // 创建数组（注意：有些编译器不支持变长数组）
    
    //方便定义数组的字符数量
    cout << "请输入" << size << "个字符:" << endl;
    
    // 输入字符
    for (int i = 0; i < size; i++) {
        cout << "字符" << i + 1 << ": ";
        cin >> moves[i];
    }
    
    // 遍历输出字符
    cout << "\n你输入的字符是: ";
    for (int i = 0; i < size; i++) 
    {
        if (moves[i] == 'R')
            a++;
        else if (moves[i] == 'L')
            a--;
        else if (moves[i] == 'F')
            b++;
        else if (moves[i] == 'B')
            b--;
    }

    //判断是否回到原点
    if (a == 0 && b == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
}