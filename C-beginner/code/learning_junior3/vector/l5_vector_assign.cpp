#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector <int> &v)
{
    for (vector <int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//vector的赋值操作
void test01()
{
    vector <int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    
    vector <int> v2; //v2 = v1的赋值操作
    v2 = v1;
    printVector(v2);
        

    //assign()函数的赋值操作
    vector <int> v3;
    v3.assign (v1.begin(), v1.end());
    printVector(v3);

    //n个elem的赋值操作
    vector <int> v4(10, 1);
    printVector(v4);
}
int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}