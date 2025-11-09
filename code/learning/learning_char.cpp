#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    char ch = 65;
    cout << ch << endl; //输出A

    char ch2 = 'B';
    cout << ch2 + 1<< endl; //输出C

    char ch3 = 'C' + 2;
    cout << ch3 << endl; //输出E

    return 0;
}