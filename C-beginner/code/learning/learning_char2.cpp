#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    char ascll;
    cout << "请输入一个字符：";
    cin >> ascll;
    cout << "你输入的字符" << ascll <<"的ASCII码为" << (int)ascll << endl;
    return 0;
}