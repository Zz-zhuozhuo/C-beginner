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
    s1.insert(11);
    s1.insert(12);
    s1.insert(13);
    printSet(s1);

    s1.erase(s1.begin()); //删除第一个元素
    s1.erase(s1.find(2)); //删除第二个元素
    printSet(s1);

    //删除重载版本
    s1.erase(4); //删除第四个元素
    printSet(s1);

    //清空
    //s1.erase(s1.begin(), s1.end()); //删除所有元素
    s1.clear();
    printSet(s1);


}




int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    test01();
    return 0;
}