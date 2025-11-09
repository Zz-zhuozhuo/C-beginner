#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int sum = 0;
    int num = 1;
    while (num <= 100)
    {
        sum += num;
        num++;
    }
    cout << "1到100的和为：" << sum << endl;

    return 0;
}