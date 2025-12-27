#include <iostream>
#include <windows.h>
using namespace std;


//全局函数重载+号运算符

class Person
{
public:

    int m_A;
    int m_B;
};

//全局函数重载+号运算符

Person operator+(const Person& p1, const Person& p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}


void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;

    Person p2;
    p2.m_A = 30;
    p2.m_B = 40;

    Person p3 = p1 + p2; //调用全局函数重载+号运算符
    //本质调用Person3 = operator+(p1, p2);

    

    cout << "p1.m_A = " << p1.m_A << endl;
    cout << "p1.m_B = " << p1.m_B << endl;
    cout << "p2.m_A = " << p2.m_A << endl;
    cout << "p2.m_B = " << p2.m_B << endl;
    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;

}





int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}