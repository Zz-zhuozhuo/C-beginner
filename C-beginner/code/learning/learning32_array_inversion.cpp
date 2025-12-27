#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    int *pArr = new int[5] {1, 3, 2, 5, 4};
    cout << "数组逆置前：" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << pArr[i] << " ";
    }

    int start = 0;
    int end = sizeof(pArr) / sizeof(pArr[0]) - 1;

    while (start < end)
    {
    
        int temp = pArr[start];
        pArr[start] = pArr[end];
        pArr[end] = temp;

        start++;
        end--;
    }

    cout << endl << "数组逆置后：" << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << pArr[i] << " ";
    }

    delete[] pArr;
    return 0;
}