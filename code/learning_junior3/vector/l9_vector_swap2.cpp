#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

void printVector(vector <int> &v)
{
    for (vector <int>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//利用swap收缩内存
void test02()
{
    vector <int> v;
    for (int i = 0; i < 10000; i++)
    {
        v.push_back(i);
    }
    printVector(v);

    cout << "v的大小为" << v.size() << endl;
    cout << "v的容量为" << v.capacity() << endl;

    //重新指定大小
    v.resize(5000);
    cout << "v的大小为" << v.size() << endl;
    cout << "v的容量为" << v.capacity() << endl;

    //利用swap收缩内存
    //vector <int> (v)为匿名对象
    //.swap(v)将v的内存交换到匿名对象中
    //匿名对象将v的内存交换到临时变量中
    //然后将临时变量的内存交换到v中，实现了内存的收缩
    //利用swap将v的内存交换到匿名对象中，匿名对象将v的内存交换到临时变量中，然后将临时变量的内存交换到v中，实现了内存的收缩
    vector <int> (v).swap(v);
    cout << "v的大小为" << v.size() << endl;
    cout << "v的容量为" << v.capacity() << endl;

}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test02();
    return 0;
}