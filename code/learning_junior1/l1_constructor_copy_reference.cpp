#include <iostream> 
#include <windows.h> 
using namespace std; 

//使用一个已经创建的对象来初始化另一个对象 

//值传递的方式给函数参数传值

//值返回局部对象

class Person 
{ 
public: 
    int m_age; 


    Person()
    {
        cout << "Person 无参(默认)构造函数调用了！" << endl;
    }
    
    Person(int age)
    {
        m_age = age;
    }

    Person(const Person &p)
    {
        m_age = p.m_age;
        cout << "Person 拷贝构造函数调用了！" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数调用了！" << endl;
    }

};


void test01()
{
    Person p1(10);
    Person p2(p1); //调用拷贝构造函数
    cout << "p1 age: " << p1.m_age << endl;
    cout << "p2 age: " << p2.m_age << endl;
}

//值传递的方式给函数参数传值
void doWork(Person p)
{

}

void test02()
{
    Person p;
    doWork(p); //调用拷贝构造函数
}



//值返回局部对象
Person getPerson()
{
    Person p1;
    return p1;
}

void test03()
{
    Person p = getPerson(); //调用拷贝构造函数
    cout << "p age: " << p.m_age << endl;
}

int main() 
{   
    SetConsoleOutputCP(65001);
    test01();
    test02();
    test03();
    return 0;
}