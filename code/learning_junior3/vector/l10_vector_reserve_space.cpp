#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

void test01()
{
    vector <int> v;

    //预留空间
    v.reserve(10000);

    //统计开辟次数
    int count = 0;
    int *p = NULL;

    for (int i = 0; i < 10000; i++)
    {
        v.push_back(i);

        if (p != &v[0])
        {
            p = &v[0];
            count++;
        }
    }

    cout << "开辟次数：" << count << endl;
}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}