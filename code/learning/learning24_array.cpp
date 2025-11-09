#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

   /* int v[5]:

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;*/

    int v2[] = {11, 22, 33, 44, 55};

    cout << "v2[0] = " << v2[0] << endl;
    cout << "v2[1] = " << v2[1] << endl;
    cout << "v2[2] = " << v2[2] << endl;
    cout << "v2[3] = " << v2[3] << endl;
    cout << "v2[4] = " << v2[4] << endl;

    cout << "v2数组一个元素的大小为" << sizeof(v2[0]) << endl;
    cout << "v2数组的第2个元素的地址为" << &v2[1] << endl;
    cout << "v2数组的地址为" << &v2 << endl;
    cout << "v2数组的大小为" << sizeof(v2) << endl;
    cout << "v2数组有几个元素" << sizeof(v2) / sizeof(v2[0]) << endl;


    return 0;
}