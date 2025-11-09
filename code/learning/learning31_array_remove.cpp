#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); 

    int * pArr = new int[5];
    pArr[0] = 1;
    pArr[1] = 2;
    pArr[2] = 3;
    pArr[3] = 4;
    pArr[4] = 5;
    int * pNewArr = new int[4]; 

    //循环遍历老数组，将非2的元素添加到新数组中
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }

        
        if (i > 2 )
        {
            pNewArr[i-1] = pArr[i];
        }
        else
        {
            pNewArr[i] = pArr[i];
        }
    }

    delete[] pArr; 

    pArr = pNewArr; 

    //输出新数组
    for (int i = 0; i < 4; i++)
    {
        cout << "新元素的数组是: " << pArr[i] << endl;
    }

    delete[] pNewArr; 

    return 0; 
}
