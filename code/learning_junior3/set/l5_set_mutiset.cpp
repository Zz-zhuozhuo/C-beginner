#include <iostream>
#include <windows.h>
#include <set>
using namespace std;

void test01()
{
    set <int> s;

    pair<set<int>::iterator, bool> ret = s.insert(10);
    if (ret.second)
    {
        cout << "元素插入成功" << endl;
    }
    
    else
    {
        cout << "元素已存在" << endl;
    }

    
    ret = s.insert(10);
    if (ret.second)
    {
        cout << "元素插入成功" << endl;
    }
    
    else
    {
        cout << "元素已存在" << endl;
    }

    
    multiset <int> ms; //允许插入重复元素的集合

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(30);

    for (multiset<int>::iterator it = ms.begin(); it!= ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    
}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}