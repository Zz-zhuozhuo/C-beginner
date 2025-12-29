#include <iostream>
#include <windows.h>
#include <map>
using namespace std;

void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it!= m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

void test01()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 2));
    m.insert(pair<int, int>(3, 4));
    m.insert(pair<int, int>(5, 6));

    if (m.empty())
    {
        cout << "m为空" << endl;
    }
    else
    {
        cout << "m不为空" << endl;
        cout << "m的大小为" << m.size() << endl;
    }
}

    void test02()
    {
        map<int, int> m1;
        m1.insert(pair<int, int>(1, 2));
        m1.insert(pair<int, int>(3, 4));
        m1.insert(pair<int, int>(5, 6));

        cout << "m1交换前： ";
        printMap(m1);
        
        
        map<int, int> m2;
        m2.insert(pair<int, int>(7, 8));
        m2.insert(pair<int, int>(9, 10));
        m2.insert(pair<int, int>(11, 12));

        cout << "m2交换前： ";
        printMap(m2);
        
        
        m1.swap(m2);
        cout << "交换后： ";
        cout << "m1： ";
        printMap(m1);
        cout << "m2： ";
        printMap(m2);
    }
    

    int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    test02();
    return 0;
}