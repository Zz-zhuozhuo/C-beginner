#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

    int i = 1;
    while (i <= 10 )    
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

    return 0;
}