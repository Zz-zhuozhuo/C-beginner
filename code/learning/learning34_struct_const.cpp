#include <iostream> 
#include <windows.h> 
using namespace std; 

struct student
{
    string name;
    int age;
    float s1core;
};


//最好用传引用的方式传递结构体，避免拷贝开销
//加const，避免误操作修改了结构体变量的值
void printstudent(const student * s1)
{
    //s1->name = "Jack"; //错误，不能修改
    cout << "姓名：" << s1->name << endl;
    cout << "年龄：" << s1->age << endl;
    cout << "分数：" << s1->s1core << endl;
}



int main() 
{   
    SetConsoleOutputCP(65001);//解决中文乱码

    //创建结构体变量信息
    struct student s1 = {"Tom", 20, 85.5};

    printstudent(&s1);
    return 0; 
}