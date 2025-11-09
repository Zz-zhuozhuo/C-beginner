#include <iostream>
#include <windows.h>
using namespace std;

//左移运算符重载
class Person
{
    friend ostream & operator <<(ostream &cout,Person &p);

public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
private:
    //利用成员函数重载左移运算符 P.operator<<(cout),cout跑到右侧，无法cout左侧
    int m_A;
    int m_B;
};

void test01()
{
    Person p(10, 20);
    // p.m_A = 10;
    // p.m_B = 20;

    cout << p << endl; //输出：m_A=10 m_B=20
}

//只能用全局函数重载左移运算符，不能用成员函数
ostream & operator <<(ostream &cout,Person &p) 
{
    cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
    return cout;
}


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}

    
