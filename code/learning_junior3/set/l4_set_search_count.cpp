#include <iostream>
#include <windows.h>
#include <set>
using namespace std;

//set容器的查找操作
void test01()
{
    set <int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);

    set <int>::iterator pos = s1.find(30); //查找元素30
    if (pos != s1.end()) //如果找到元素30
    {
        cout << "找到元素"<< endl;
    }
    else
    {
        cout << "元素不在集合中" << endl;
    }
}


    //统计元素个数
    //统计结果只有1或0,如果元素不存在,则返回0,如果元素存在,则返回1
    void test02()
    {
        set <int> s1;
        s1.insert(10);
        s1.insert(20);
        s1.insert(30);
        s1.insert(30); //重复元素,只统计一次
        s1.insert(40);
        s1.insert(50);
        
        int count = s1.count(30); //统计元素30的个数
        cout << "元素30的个数为" << count << endl;
    }





int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    test02();
    return 0;
}