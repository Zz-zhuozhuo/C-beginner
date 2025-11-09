#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //判断是否为空
    if (v1.empty()) 
    {
        cout << "v1 is empty" << endl;
    }
    else
    {
        cout << "v1 is not empty" << endl;
    }

    cout << "v1的容量为：" << v1.capacity() << endl;
    cout << "v1的大小为：" << v1.size() << endl;

    //重新指定大小
    //比原来大
    v1.resize(15 ,100); //指定大小为15，初始值填充100
    printVector(v1); //如果重新指定比原来长，则多余的元素会被填充100


    //比原来小
    v1.resize(5); //指定大小为5
    printVector(v1); //多余的元素会被删除

}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}