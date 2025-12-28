#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

//vector类模板自定存储类
class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};


void test01()
{
    vector <Person>v;

    Person p1("张三", 20);
    Person p2("李四", 30);
    Person p3("王五", 40);
    Person p4("赵六", 50);

    //向vector中添加元素
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    //遍历vector中的元素
    for (vector<Person>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout << "姓名：" << (*it).m_Name << endl;
        cout << "年龄：" << it -> m_Age << endl;
    }
}


//存放自定义类型的指针
void test02()
{
    vector<Person*>v;

    Person p1("张三", 20);
    Person p2("李四", 30);
    Person p3("王五", 40);
    Person p4("赵六", 50);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);

    //遍历vector中的元素
    for (vector<Person*>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout << "姓名：" << (*it)->m_Name << endl;
        cout << "年龄：" << (*it)->m_Age << endl;
    }

}



int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    test01();
    test02();

    return 0;

}
