#include <iostream> 
#include <windows.h> 
using namespace std; 

class Employee 
{ 
private: 
    string m_Name; 
    int m_Age;
    string m_Position;



public: 
    // 构造函数，初始化员工对象的姓名、年龄和职位
    Employee(string name, int age, string position) 
    {
        m_Name = name;
        m_Age = age;
        m_Position = position;
    }

    // 返回员工的职位
    string getPosition() 
    {
        return m_Position;
    }

    
    // updateInfo()：更新员工的姓名、年龄和职位信息
    void updateInfo(string newName, int newAge, string newPosition)
    {
        m_Name = newName;
        m_Age = newAge;
        m_Position = newPosition;
    }

    //显示员工的姓名、年龄和职位信息
    void displayInfo() 
    {
        cout << "姓名: " << m_Name << endl;
        cout << "年龄: " << m_Age << endl;
        cout << "职位: " << m_Position << endl;
    }

    // 设置与获取姓名
    void set_name(string name) 
    {
        m_Name = name;
    }

    string get_name() 
    {
        return m_Name;
    }
    

    //设置与获取年龄
    void set_age(int age)
    {
        m_Age = age;
    }

    int get_age() {
        return m_Age;
    }

    
    //设置与获取职位
    void set_position(string position)
    {
        m_Position = position;
    }

    string get_position()
    {
        return m_Position;
    }
}; 

int main() 
{   
    SetConsoleOutputCP(65001); 

    // 创建员工对象并初始化
    Employee emp("张三", 30, "软件工程师");
    
    // 显示初始化后的信息
    cout << "初始化后的员工信息:" << endl;
    emp.displayInfo();
    cout << endl;
    
    // 使用getPosition()获取职位
    cout << "职位：" << emp.getPosition() << endl;
    cout << endl;
    
    // 更新员工信息
    emp.updateInfo("张三", 31, "高级软件工程师");
    
    // 显示更新后的信息
    cout << "更新后的员工信息:" << endl;
    emp.displayInfo();

    return 0; 
}