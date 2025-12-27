#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    struct Student
    {
        string name;
        int age;
        string gender;
        float gpa;
    }stu3;

    
    
        struct Student stu1 = {"张三", 18, "男", 3.5};
    

        cout << "姓名：" << stu1.name << endl;
        cout << "年龄：" << stu1.age << endl;
        cout << "性别：" << stu1.gender << endl;
        cout << "GPA：" << stu1.gpa << endl;


    
    
    
        struct Student stu2;
        stu2.name = "李四";
        stu2.age = 19;
        stu2.gender = "女";
        stu2.gpa = 3.8;

        cout << "姓名：" << stu2.name << endl;
        cout << "年龄：" << stu2.age << endl;
        cout << "性别：" << stu2.gender << endl;
        cout << "GPA：" << stu2.gpa << endl;


        stu3.name = "王五";
        stu3.age = 20;
        stu3.gender = "男";
        stu3.gpa = 3.9;

        cout << "姓名：" << stu3.name << endl;
        cout << "年龄：" << stu3.age << endl;
        cout << "性别：" << stu3.gender << endl;
        cout << "GPA：" << stu3.gpa << endl;

        return 0;
}
    