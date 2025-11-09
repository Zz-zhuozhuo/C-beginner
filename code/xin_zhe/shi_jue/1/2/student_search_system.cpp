#include <iostream> 
#include <windows.h> 
#include <string>    
using namespace std; 

class Student 
{
public:
    string id;       
    string name;     
    int chinese;     
    int math;        

    // 显示学生信息
    void showStudent()
    {
        cout << id << " " << name << " " << chinese << " " << math << endl;
    }

    
    // 设置学生信息
    void setStudent(string stuId, string stuName, int chi, int mat)
    {
        id = stuId;      
        name = stuName;  
        chinese = chi;
        math = mat;
    }
};


// 查找数学成绩≥90的学生
void findMathHigh(Student students[], int count)
{
    cout << "数学成绩≥90的学生：" << endl;
    
    
    for (int i = 0; i < count; i++)
    {
        if (students[i].math >= 90)
        {
            students[i].showStudent();
            
        }
    }
    
}

int main() 
{   
    SetConsoleOutputCP(65001);  // 解决中文乱码

    int n;
    cout << "请输入学生人数: ";
    cin >> n;
    
    
    // 创建学生数组
    Student *students = new Student[n];
    
   
    // 输入学生信息
    cout << "输入学生信息（学号 姓名 语文成绩 数学成绩）:" << endl;
    for (int i = 0; i < n; i++)
    {
        string id, name;  
        int chinese, math;
        
        cin >> id >> name >> chinese >> math;
        students[i].setStudent(id, name, chinese, math);
    }
    
    
    // 查找并输出数学成绩≥90的学生
    findMathHigh(students, n);
    
    
    // 释放内存
    delete[] students;
    
    return 0; 
}





























/*
int main() 
{   
    SetConsoleOutputCP(65001);

    Student s1;
    s1.Setstudent(2024001, "张三", 90, 80);

    Student s2;
    s2.Setstudent(2024002, "李四", 85, 95);

    Student s3;
    s3.Setstudent(2024002, "李四", 85, 90);

    Student s3;
    s3.Setstudent(2024002, "李四", 85, 90);

    Student s3;
    s3.Setstudent(2024002, "李四", 85, 90);

    */



