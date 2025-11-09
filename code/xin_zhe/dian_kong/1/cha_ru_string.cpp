#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    // 输入字符串
    string str;
    cout << "请输入原始字符串:" << endl;
    cin >> str;

    // 输入要插入的字符串
    string add_str;
    cout << "请输入要插入的字符串:" << endl;
    cin >> add_str;
    

    
    // 在指定位置插入字符串（从0开始计数）
    int pos;
    cout << "请输入插入位置:" << endl;
    cin >> pos;
    str.insert(pos, add_str);
    
    cout << "插入后字符串: " << str << endl;
    
    return 0;
}