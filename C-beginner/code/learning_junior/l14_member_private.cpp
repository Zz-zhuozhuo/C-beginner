#include <iostream> 
#include <windows.h> 
using namespace std; 

class Person 
{
public:
    //设置姓名
    void SetName(string name) 
    {
        m_Name = name; 
    }

    //获取姓名
    string getName() 
    {
        return m_Name; 
    }

    
    //设置年龄
    void setAge(int age) 
    {
        if (age < 0 || age > 150) 
        {
            cout << "年龄设置错误！" << endl;
            return;
        }
        m_Age = age; 
    }
    
    
    
    
    //获取年龄
    int getAge() 
    {
        return m_Age; 
    }

    //设置偶像
    void setIdol(string idol) 
    {
        m_Idol = idol; 
    }

    //获取偶像
    string getIdol() 
    {
        return m_Idol; 
    }



private:    
    string m_Name; //可读可写
    int m_Age = 19;  //只读
    string m_Idol;  //只写
};




int main() 
{   
    SetConsoleOutputCP(65001);

    Person p1;
    p1.SetName("张三");  //姓名设置
    cout << "姓名：" << p1.getName() << endl;

    //p1.m_Age = 20; //年龄设置
    cout << "年龄：" << p1.getAge() << endl; //年龄可以获取

    //设置偶像
    p1.setIdol("周杰伦");
    cout << "偶像：" << p1.getIdol() << endl; //偶像只能获取

    return 0;
}