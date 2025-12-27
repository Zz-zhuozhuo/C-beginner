#include <iostream>
#include <windows.h>
#include <set>
using namespace std;

//存放自定义数据类型，set排序

class Person
{
public:
    int m_Age;
    string m_Name;

    Person(int age, string name)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
    
};

//按照年龄降序
class comparePerson
{
public:
    bool operator()(const Person& p1, const Person& p2) const
    {
        return p1.m_Age > p2.m_Age;
    }
};


void test01()
{
    set<Person, comparePerson> s;
    Person p1(20, "张三");
    Person p2(25, "李四");
    Person p3(30, "王五");
    Person p4(35, "赵六");

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for (set <Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << it->m_Name << " " << it->m_Age << endl;
    }



}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}