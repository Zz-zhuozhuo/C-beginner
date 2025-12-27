#include <iostream>
#include <windows.h>
using namespace std;


//成员函数重载+号运算符

class Person
{
public:
    Person operator+(Person &p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

    int m_A;
    int m_B;
};

void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;

    Person p2;
    p2.m_A = 30;
    p2.m_B = 40;

    Person p3 = p1 + p2;
    //本质调用Person p3 = p1.operator+(p2);

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