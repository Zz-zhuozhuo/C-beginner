#include <iostream>
#include <windows.h>
using namespace std;

struct student 
{
    string name;
    int age;
    float score;
};


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    struct student s1 = {"张三", 18, 90.5};
    struct student* p = &s1;

    cout << "姓名：" << p->name << endl;
    cout << "年龄：" << p->age << endl;
    cout << "分数：" << (*p).score << endl;

    return 0;
}

