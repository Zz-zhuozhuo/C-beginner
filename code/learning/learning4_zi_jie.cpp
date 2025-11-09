#include <iostream>
#include "Windows.h"
using namespace std;


int main() 
{
    SetConsoleOutputCP(65001); //解决中文乱码问题

string name = "张三";
string class_name = "一班";
string major = "计算机科学与技术";

string msg = "姓名：" + name + "\n班级：" + class_name + "\n专业：" + major;

cout << msg << endl;

return 0;
}