#include <iostream>
#include <windows.h>
using namespace std;

//成员函数后加const，称其为常函数
//常函数不能修改类的成员变量属性，只能访问
//成员属性声明时候加关键字mutable，表示该成员变量可以被修改


//const加对象，变成常对象
//常对象只能访问常成员函数，不能修改成员变量
//常对象只能调用常成员函数，不能调用非常成员函数

class Person
{
public:
    //加const修饰this的指向，让指针指向的值也不可以改
    void showPerson() const
    {
        // m_A = 100; 
        //常函数不能修改成员变量
        //编译器自用变为this->m_A = 100;
        //this指针本质为指针常量，不能修改

        this->m_B = 200;
    }

    mutable int m_B; //mutable修饰的成员变量，可以被修改

    //常对象
    void test02()
    {
        const Person p;


        //p.m_A = 100; //常对象不能修改成员变量
        p.m_B = 300; //常对象可以修改mutable成员变量

        //p.func(); 常对象只能调用常函数

        //常对象只能调用常函数，因为普通成员函数可以修改属性，否则间接修改属性，违背常函数的原则
        p.showPerson();
    }

    void func()
    {

    }
};

    
   
        




int main()
{
    SetConsoleOutputCP(65001);
    Person p;
    p.showPerson();
    p.test02();
    return 0;
}