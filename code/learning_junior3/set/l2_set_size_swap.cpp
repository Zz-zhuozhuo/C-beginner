#include <iostream>
#include <windows.h>
#include <set>
using namespace std;

void printSet(set<int> &s)
{
    for (set <int>::iterator it = s.begin(); it!= s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set <int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    cout << "s1： ";
    printSet(s1);

    if (s1.empty())
    {
        cout << "集合为空！" << endl;
    }
    else
    {
        cout << "s1不为空" << endl;
        cout << "s1的大小为： " << s1.size() << endl;
    }
}

void test02()
{
    set <int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    cout << "s1交换前： ";
    printSet(s1);

    set <int> s2;
    s2.insert(5);
    s2.insert(6);
    s2.insert(7);
    s2.insert(8);
    cout << "s2交换前： ";
    printSet(s2);

    s1.swap(s2);
    cout << "交换后： ";
    cout << "s1： ";printSet(s1);
    cout << "s2： ";printSet(s2);
}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    test02();
    return 0;
}