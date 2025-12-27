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

//set更改排序顺序
class MyCompare 
{
public:
    bool operator()(int v1, int v2) const
    {
        return v1 > v2; //降序排序
    }
};


void test01()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    s1.insert(6);
    s1.insert(7);
    s1.insert(8);
    s1.insert(9);
    s1.insert(10);

    cout << "原始集合：";
    printSet(s1);



    set<int, MyCompare> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(4);
    s2.insert(5);
    s2.insert(6);
    s2.insert(7);
    s2.insert(8);
    s2.insert(9);
    s2.insert(10);

    cout << "降序排序集合：";
    for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
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