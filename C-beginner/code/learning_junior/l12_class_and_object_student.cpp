#include <iostream> 
#include <windows.h> 
using namespace std; 


class Student 
{
public:
    //成员属性
    string m_Name;
    int m_Id;

    //行为
    void showStudent()
    {
        cout << "姓名：" << m_Name << "，学号：" << m_Id << endl;
    }

    //给姓名赋值
    void setName(string name)
    {
        m_Name = name;
    }

    
    //给学号赋值
    void setId(int id)
    {
        m_Id = id;
    }

}; 


int main() 
{   
    SetConsoleOutputCP(65001); 

    //创建对象，实例化
    Student s1;
   /*
    s1.N = "张三";
    s1.m_Id = 1001;
    */
    
    //给对象赋值
    s1.setName("张三");
    s1.setId(1001);


    Student s2;
    s2.m_Name = "李四";
    s2.m_Id = 1002;
    
    //调用方法
    s1.showStudent();
    s2.showStudent();

    return 0; 
}
