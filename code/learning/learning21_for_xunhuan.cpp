#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;

    }
    return 0;
}