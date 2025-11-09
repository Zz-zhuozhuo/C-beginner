#include <iostream> 
#include <windows.h> 
using namespace std; 

struct student
{
    string name;
    int age;
    float score;
};





struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};



int main() 
{   
    SetConsoleOutputCP(65001);

    teacher t1;
    t1.id = 101;
    t1.name = "John";
    t1.age = 30;
    t1.stu.name = "Alice";
    t1.stu.age = 25;
    t1.stu.score = 85.5;

    cout << "Teacher ID: " << t1.id << endl;
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Teacher Age: " << t1.age << endl;
    cout << "Student Name: " << t1.stu.name << endl;
    cout << "Student Age: " << t1.stu.age << endl;
    cout << "Student Score: " << t1.stu.score << endl;

    return 0; 
}

