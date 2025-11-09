#include <iostream> 
#include <windows.h> 
using namespace std; 

//静态成员变量 
//所有成员都共享同一份数据
//编译阶段分配内存，运行时初始化
//类内声明，类外初始化操作

class Person
{
public:

    //静态成员变量,类内声明
    static int m_A;

    //静态成员变量也是有访问权限的
private:
    static int m_B;

};

//静态成员变量,类外初始化操作
int Person::m_A = 10; 
int Person::m_B = 20; //类外访问不了私有成员变量

void test01()
{
    Person p;
    cout << "p.m_A = " << p.m_A << endl;

    //此时m_A已经被初始化为10
    //所有Person对象共享同一份数据
    //修改p2.m_A也会影响p1.m_A（因为是修改同一份数据）
    Person p2;
    p2.m_A = 20;
    cout << "p2.m_A = " << p2.m_A << endl;
}

void test02()
{
    //静态成员变量，不属于某个对象上的成员变量，而是属于整个类
    //所有对象共享同一份数据
    //静态变量有两种访问方式：类名::静态变量名 和 对象名::静态变量名

    //通过对象访问静态成员变量
    Person p1;
    cout << "p1.m_A = " << p1.m_A << endl;

    //通过类名访问静态成员变量
    cout << "Person::m_A = " << Person::m_A << endl;
}
int main() 
{

    SetConsoleOutputCP(65001);

    test01();
    test02();

    return 0;
}
