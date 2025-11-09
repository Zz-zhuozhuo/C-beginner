#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    void showClassName()
    {
        cout << "Person class" << endl;
    }

    void showPersonAge()
    {
        if (this == NULL) //空指针判断
        {
            cout << "this is a null pointer" << endl;
            return;
        }
        cout << "age = " << m_Age << endl;//属性前默认加上this->，产生空指针异常
    }

    int m_Age;
};

void test01()
{
    Person *p = NULL;
    
    p->showClassName();
    p->showPersonAge();
}


int main()
{
    SetConsoleOutputCP(65001);
    test01();
    return 0;
}