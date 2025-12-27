#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

void test01()
{
    vector <vector <int>>v;

    //创建小容器
    vector <int>v1;
    vector <int>v2;
    vector <int>v3;
    vector <int>v4;

    //向小容器中添加元素
    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i + 1);       //1,2,3,4
        v2.push_back(i + 2);       //2,3,4,5
        v3.push_back(i + 3);       //3,4,5,6
        v4.push_back(i + 4);       //4,5,6,7
    }

    //向大容器中添加小容器,小容器插入大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    //输出大容器
    for (vector <vector <int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        for (vector <int>::iterator it2 = it->begin(); it2 != it->end(); it2++)
        {
            cout << *it2 << " ";
        }
        cout << endl;
    }
}



int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}