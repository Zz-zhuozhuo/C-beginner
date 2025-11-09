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

    struct student stu[3] =
    {   
        {"张三", 18, 90.5},
        {"李四", 19, 85.0},
        {"王五", 20, 88.5}
    };

    stu[2].name =   "赵六";
    stu[2].age = 21;
    stu[2].score = 92.5;

    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << stu[i].name << endl;
        cout << "年龄：" << stu[i].age << endl;
        cout << "分数：" << stu[i].score << endl;
    }

    return 0;
}

