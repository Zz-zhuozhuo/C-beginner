#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);

   /*for (int i = 0; i < 20; i++) //输出0到19之间的奇数
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
*/
    for (int i = 0; true; i++) //输出0到19之间的数字，直到i=20时停止
    {
        if (i == 20)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}