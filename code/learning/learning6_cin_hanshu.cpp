#include <iostream>
#include "Windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int mum;
    cout <<"请输入一个整数：" << endl;
    cin >> mum;
    
    double num2;
    cout << "请输入一个小数：" << endl;
    cin >> num2;

    char c;
    cout << "请输入一个字符：" << endl;
    cin >> c;

    string str;
    cout << "请输入一个字符串：" << endl;
    cin >> str;

    cout << "整数：" << mum << endl;
    cout << "小数：" << num2 << endl;
    cout << "字符：" << c << endl;
    cout << "字符串：" << str << endl;

    return 0;
}