#include <iostream> 
#include <windows.h> 
using namespace std; 


class Phone 
{
public:
    Phone(string pName)
    {
        cout << "Phone 构造函数调用" << endl;
        m_PName = pName;
    }

    ~Phone()
    {
        cout << "Phone 析构函数调用" << endl;
    }

    string m_PName;
};

class Person 
{
public:

    //Phone m_Phone = pName; // 隐式转换法
    Phone m_Phone;
    string m_Name;
    
    Person(string name, string pName) : m_Name(name) , m_Phone(pName) 
    {
        cout << "Person 构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数调用" << endl;
    }

};

//当其他类对象作为本类成员，构造时先构造类的对象，再构造自身的对象，构造顺序为：先构造成员对象，再构造本类对象。
//析构的顺序为：先析构本类对象，再析构成员对象。（析构顺序与构造顺序相反）

void test01()
{
    Person p("Tom", "huaWei");
    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main() 
{   
    SetConsoleOutputCP(65001);

    test01();

    return 0; 
}