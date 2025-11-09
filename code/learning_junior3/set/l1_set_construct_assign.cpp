#include <iostream>
#include <windows.h>
#include <set>
using namespace std;

//所有元素在插入后会自动排序
//底层为红黑树实现，二叉树
//set的元素是唯一的，不允许重复元素

void printSet(set <int> &s)
{
    for (set <int> :: iterator it = s.begin(); it!= s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set <int> s1; 

    //插入元素，只能用insert()函数
    s1.insert(10);
    s1.insert(10); //不会插入，因为set不允许重复元素
    s1.insert(70);
    s1.insert(50);
    s1.insert(40);
    printSet(s1);

    //拷贝构造
    set <int> s2(s1);
    printSet(s2);

    //赋值运算符
    set <int> s3;
    s3 = s2;
    printSet(s3);

}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}