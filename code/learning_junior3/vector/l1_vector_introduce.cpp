#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>
using namespace std;

void myPrint(int val)
{
    cout << val << endl;
}

void test01()
{
    //创建vector容器，数组
    vector <int> v1;

    //向vector中添加元素
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    //遍历vector容器，使用迭代器访问元素
    vector <int>::iterator itBegin = v1.begin(); //返回容器中第一个元素的迭代器
    vector <int>::iterator itEnd = v1.end(); //返回容器中最后一个元素的迭代器

    /*
    //while循环遍历vector容器
    while (itBegin!= itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }
        */

    
        //使用for循环遍历vector容器
    for (vector <int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << endl;
    }

     /*
    //利用STL提供遍历算法
    //回调函数
    for_each(v1.begin(), v1.end(), myPrint);
*/
}


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}