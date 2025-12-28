#include <iostream> 
#include <windows.h> 
using namespace std; 


//成员变量和成员函数分开存储
class Person
{
    int m_A; //非静态成员变量
    static int m_B; //静态成员变量,不属于类的对象上，而是属于类本身

    //成员变量和成员函数分开存储，不属于类的对象上，而是属于类本身
    void func()
    {
    }

    //静态成员函数，不属于类的对象上，而是属于类本身
    static void func2()
    {
    }
};

int Person::m_B = 20; //类外初始化静态成员变量

void test01() 
{
    Person p;
    //空对象占用内存大小为：1（对象头）+ 0（成员变量）+ 0（成员函数）= 1
    //编译器给空对象也分配内存，是为了区分空对象占内存的位置
    //每个空对象有独一无二的内存地址
    cout << "size of p" <<"="<< sizeof(p) << endl;
}

void test02() 
{
    Person p;
    //非空对象占用内存大小为：1（对象头）+ 4（成员变量）+ 0（成员函数）= 5
    cout << "size of p" << "=" << sizeof(p) << endl;
}
int main() 
{   
    SetConsoleOutputCP(65001);
    test01();
    test02();
    return 0;
}