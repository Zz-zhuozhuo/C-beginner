#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

void printVector(vector <int> &v)
{
    for (vector <int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//函数容器的构造
void test01()
{
    vector <int> v1; //默认构造函数,无参构造函数

    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    printVector(v1);

    
    //通过区间的方式构造
    vector <int> v2(v1.begin(), v1.end());

    printVector(v2);

    
    //通过值的方式构造，n个element
    vector <int> v3(10, 1); //10个1

    printVector(v3);

    
    //拷贝构造函数
    vector <int> v4(v3);

    printVector(v4);

}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}