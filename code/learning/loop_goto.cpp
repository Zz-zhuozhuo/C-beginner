#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

    int i = 1;
    loop :
        cout <<  i << endl;
        i++;

        if (i < 10)
            goto loop;

    return 0;
}
