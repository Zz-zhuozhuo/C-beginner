#include <iostream> 
#include <windows.h> 
using namespace std; 


//构造函数调用规则：创建一个类，编译器给每个类至少添加3个函数
//默认构造、析构函数、拷贝构造函数

//如果写了有参构造函数，则默认构造函数失效，但编译器依然提供拷贝构造函数
//如果写了拷贝构造函数，则编译器不提供其他构造函数
//如果没有写有参构造函数，则编译器提供默认构造函数，但不提供拷贝构造函数
//如果写了析构函数，则编译器不提供默认构造函数，也不提供拷贝构造函数
class Person 
{
public:
    int m_Age; //成员变量

    
    Person() //默认构造函数
    {
        cout << "Person 无参(默认)构造函数调用了！" << endl; 
    } 
    

    Person(int age)
    {
        m_Age = age;
        cout << "Person 有参构造函数调用了！" << age << endl;
    }
    
    /*
    Person(const Person &p) //拷贝构造函数
    {
        m_Age = p.m_Age;
        cout << "Person 拷贝构造函数调用了！" << endl;
    }
        */

    ~Person() //析构函数
    {
        cout << "Person 析构函数调用了！" << endl; 
    } 

};


/*
void test01()
{
    Person p; //调用默认构造函数
    p.m_Age = 20; //调用有参构造函数
    
    
    Person p2(p); //调用拷贝构造函数
    cout << "p2.m_Age = " << p2.m_Age << endl;
}
    */

void test02()
{
    Person p(28);
    
    Person p2(p); //调用拷贝构造函数
}






int main() 
{   
    SetConsoleOutputCP(65001);

    test02();

    return 0;
}