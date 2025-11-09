#include <iostream>
#include "Windows.h"
#include <string>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    string name = "小黑";
    string major = "计算机科学与技术";
    int age = 20;
    float height = 1.75;

    string msg = "我的名字是" + name + "，我的专业是" + major + "，我的年龄是" + to_string(age) + "岁，我的身高是" + to_string(height) + "米。";

    cout << msg << endl;

    return 0;
}