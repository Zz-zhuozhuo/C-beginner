#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for (vector <int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//vector容器呼唤
void test01()
{
    vector <int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    cout << "交换前：" << endl;
    printVector(v1);
    
    
    vector <int> v2;
    for (int i = 10; i < 20; i++)
    {
        v2.push_back(i);
    }
    cout << "交换前：" << endl;
    printVector(v2);
    
    cout << "交换后：" << endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}



int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}