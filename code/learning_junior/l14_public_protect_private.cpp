/*#include <iostream> 
#include <windows.h> 
using namespace std; 

class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;


//类内三种都可以访问
public:
    void func()
    {
        m_Name = "John";
        m_Car = "BMW";
        m_Password = 1234;
    }
};

//类外只能访问public成员
void func(Person p1)
{
    cout << p1.m_Name << endl;
}



int main() 
{   
    SetConsoleOutputCP(65001);
    
    Person p1;

    p1.m_Name = "John";
    /*
    //编译错误，因为m_Car和m_Password是私有成员，不能直接访问
    p1.m_Car = "BMW";
    p1.m_Password = 1234;
    */
/*   p1.func();

    return 0;
} 
*/

#include <windows.h>
#include <iostream>
using namespace std;

class Student {
public:
    string name;        // 公有 - 谁都可以访问
    
private:
    int score;          // 私有 - 只有类内可以访问

public:
    // 设置成绩（类内可以访问private成员）
    void setScore(int s) {
        if(s >= 0 && s <= 100) {
            score = s;
        }
    }
    
    // 获取成绩
    int getScore() {
        return score;
    }
    
    // 显示信息
    void showInfo() {
        cout << "学生: " << name << ", 成绩: " << score << endl;
    }
};

int main() {
    
    SetConsoleOutputCP(65001);
    
    Student stu;
    
    // 可以直接设置public成员
    stu.name = "小明";
    
    // 不能直接设置private成员
    // stu.score = 90; // 错误！
    
    // 通过public函数设置private成员
    stu.setScore(95);
    
    // 显示信息
    stu.showInfo();
    
    return 0;
}