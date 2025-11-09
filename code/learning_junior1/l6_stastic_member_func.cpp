#include <iostream> 
#include <windows.h> 
using namespace std; 

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person 
{ 
public: 

    //静态成员函数
    static void func() 
    {
        cout << "static函数的调用" << endl; 
        m_A = 100; //修改静态成员变量(所有对象共享同一个变量,不属于哪一个对象)
        //m_B = 200; //错误，静态成员函数不能访问普通成员变量(编译器不知道该访问哪个对象的m_B)
    }
    
    static int m_A; //静态成员变量
    int m_B; //普通成员变量


//静态函数的访问权限
private:
    static void func2() 
    {
        cout << "stastic void func2的调用" << endl; 
    }

};

int Person::m_A = 10; //静态成员变量初始化


//2种调用方式
void test01() 
{
    //通过对象调用静态成员函数
    Person p;
    p.func(); //调用静态成员函数
    p.m_A = 20; //修改普通成员变量(不属于哪一个对象)
    cout << "p.m_A = " << p.m_A << endl; //输出p.m_A = 20



    //通过类名调用静态成员函数
    Person::func(); //调用静态成员函数

    //类外访问不了静态成员函数
    //Person::func2(); //错误，编译器不知道该访问哪个对象的func2
}

int main() 
{   
    SetConsoleOutputCP(65001);
    test01();
    return 0;
}