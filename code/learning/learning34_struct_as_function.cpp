#include <iostream> 
#include <windows.h> 
using namespace std; 


struct student
{
    string name;
    int age;
    float score;
};


//打印学生信息函数，值传递
void printStudentInfo(struct student s1)
{
    //若函数内修改s1的值，不会影响到main函数中的s1
    cout << "姓名：" << s1.name << endl;
    cout << "年龄：" << s1.age << endl;
    cout << "分数：" << s1.score << endl;
}


//打印学生信息函数，指针传递
void printStudentInfo(struct student *s1)
{
    //若函数内修改s1的值，会影响到main函数中的s1
    cout << "姓名：" << s1->name << endl;
    cout << "年龄：" << s1->age << endl;
    cout << "分数：" << s1->score << endl;
}


    
    
    int main() 
{   
    SetConsoleOutputCP(65001);

    //结构体作函数参数
    //将学生传入到另一个参数中，打印学生身上的所有信息

    //创造结构体变量
    struct student s1;
    s1.name = "张三";
    s1.age = 20;
    s1.score = 90.5;

    printStudentInfo(s1);
    printStudentInfo(&s1);

    cout <<"main函数中，学生的信息为："<< endl;
    cout << "姓名：" << s1.name << endl;
    cout << "年龄：" << s1.age << endl;
    cout << "分数：" << s1.score << endl;

    return 0;
}

