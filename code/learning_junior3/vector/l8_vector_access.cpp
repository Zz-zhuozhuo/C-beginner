#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

//vector 数据存取
void test01()
{
    vector <int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    //利用[]来访问数组中的元素
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    
    //利用at()来访问数组中的元素
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    //获取第一个元素
    cout << "第一个元素：" << v1.front() << endl;

    //获取最后一个元素
    cout << "最后一个元素：" << v1.back() << endl;

    //获取第2个元素
    cout << "第2个元素：" << v1.at(1) << endl;

    //获取第5个元素
    cout << "第5个元素：" << v1.at(4) << endl;

    //获取第10个元素，超出范围，会抛出异常
    //cout << "第10个元素：" << v1.at(9) << endl;
}




int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}