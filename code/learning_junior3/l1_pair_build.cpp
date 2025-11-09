#include <iostream>
#include <windows.h>
using namespace std;

//pair对组创建
void test01()
{
    //方式一
    pair<int, string> p1(20, "Tom");
    cout << "年龄 " << p1.first << endl;
    cout << "姓名 " << p1.second << endl;

    //方式二
    int age = 20;
    string name = "Tom";
    pair<int, string> p2 = make_pair(age, name);
    cout << "年龄 " << p2.first << endl;
    cout << "姓名 " << p2.second << endl;
}



int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}