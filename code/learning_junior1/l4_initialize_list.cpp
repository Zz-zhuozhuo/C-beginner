#include <iostream> 
#include <windows.h> 
using namespace std; 

//初始化列表
class Person
{
public:
    //传统初始化方式
    /*
    Person(int a, int b, int c)
    {
        m_A = a;
        m_B = b;
        m_C = c;
    }
        */

    //使用初始化列表
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
    {
        cout << "Person初始化列表构造函数调用" << endl;
    }

    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    Person p1(1, 8, 3);
    cout << "p1.m_A = " << p1.m_A << endl;
    cout << "p1.m_B = " << p1.m_B << endl;
    cout << "p1.m_C = " << p1.m_C << endl;
}



    //使用初始化列表
int main() 
{   
    SetConsoleOutputCP(65001);
    test01();
    return 0;
}