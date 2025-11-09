#include <iostream> 
#include <windows.h> 
using namespace std; 

//this指针是隐含每一个非静态成员函数的一种指针
//this指针不需要定义，直接使用即可

//用途：
//1.当形参和成员变量重名时，可以用this指针来区分
//2.在类的非静态成员函数中返回对象本身，可用return *this;
//3.在类的非静态成员函数中调用其他非静态成员函数，可用this指针来调用

class Person 
{ 
public:
    Person(int age)
    {
    //m_Age = age;常规方法
    
    //this指针指向被调用的成员函数所属的对象
    this->age = age; //this指针方法

    //*this指p2这个对象的本体，即p2
    //this指向p2的指针
    }

    int age; 

    Person &PersonAddAge(Person &p) //this指针方法
    //void PersonAddAge(Person &p)，用了*this后不能这么写
    {
        this->age += p.age; //this指针方法
        return *this; //this指针方法
    }

};

void test01() 
{
    Person p1(18);
    cout << "p1的年龄：" << p1.age<< endl;
}


void test02()
{
    Person p1(10);
    Person p2(20);

    //需返回对象本身，可用return *this;
    //若不加引用，则返回的是对象的副本（浅拷贝），而不是对象本身
    //return p2; //错误，不能返回对象本身
    //链式builder模式，可用this指针来调用（类似cout）
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1); //this指针方法

    cout << "p2的年龄：" << p2.age << endl;
}

int main() 
{   
    SetConsoleOutputCP(65001);
    test01();
    test02();
    return 0;
}