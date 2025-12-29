#include <iostream>
#include <windows.h>
#include <queue>
using namespace std;

//队列先进先出
//只有队头和队尾能被访问，队尾进队，队头出队
//因此不允许遍历整个队列
//push入队尾，pop出队头

class Person
{
public:
    string m_Name;
    int m_Age;
    Person(string name, int age)
    {
       this-> m_Name = name;
       this-> m_Age = age;
    }
};

void test01()
{
    queue <Person> q;
    Person p1("张三", 20);
    Person p2("李四", 25);
    Person p3("王五", 26);
    Person p4("赵六", 22);

    //入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    cout << "队列大小：" << q.size() << endl;

    //队列不为空，查看队头，队尾
    while (!q.empty())
    {
        cout << "队头：" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;
        cout << "队尾：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;

        //出队
        q.pop();
    }

    cout << "队列大小：" << q.size() << endl;
}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}