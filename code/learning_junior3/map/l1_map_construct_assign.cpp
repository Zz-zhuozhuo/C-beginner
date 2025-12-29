#include <iostream>
#include <windows.h>
#include <map>
using namespace std;

//pair第一个元素为key，第二个元素为value
//所有元素根据键值排序

void printMap(map<int,int> &m)
{
    for (map<int,int>::iterator it = m.begin(); it!= m.end(); it++)
    {
        cout << "key=" << (*it).first << " value=" << it -> second << endl;
    }
}
void test01()
{
    map<int ,int> m;

    m.insert(pair<int,int>(1,2));
    m.insert(pair<int,int>(5,6));
    m.insert(pair<int,int>(3,4));
    m.insert(pair<int,int>(7,8));
    printMap(m);

    //拷贝构造函数
    map<int,int> m2(m);
    printMap(m2);

    //赋值运算符
    map<int,int> m3;
    m3 = m;
    printMap(m3);
}
int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}