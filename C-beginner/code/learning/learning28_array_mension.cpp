#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int arr[2][2][2];
    arr[0][0][0] = 1;
    arr[0][0][1] = 2;
    arr[0][1][0] = 3;
    arr[0][1][1] = 4;
    arr[1][0][0] = 5;
    arr[1][0][1] = 6;
    arr[1][1][0] = 7;
    arr[1][1][1] = 8;

    int arr2[2][3][2] = {{ {1,2}, {3,4}, {5,6} }, { {7,8}, {9,10}, {11,12} } };

    cout << "arr[0][0][0] = " << arr[0][0][0] << endl;
    cout << "arr[0][0][1] = " << arr[0][0][1] << endl;
    cout << "arr[0][1][0] = " << arr[0][1][0] << endl;

    cout << "arr2[0][0][0] = " << arr2[0][0][0] << endl;
    cout << "arr2[0][0][1] = " << arr2[0][0][1] << endl;
    cout << "arr2[0][1][0] = " << arr2[0][1][0] << endl;
    cout << "arr2[0][1][1] = " << arr2[0][1][1] << endl;

    return 0;
}