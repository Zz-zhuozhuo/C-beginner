#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); 

    int * Arr = new int[5] {1, 2, 3, 4, 5};
    int * pNewArr = new int[7];


    //循环新数组，挨个进行元素填充（非插入的位置，填充老数组元素；插入的位置填充新元素）
    int offset = 0;
    for (int i = 0; i < 7; i++) 
    {
        if (i == 1)
        {
            offset++;
            pNewArr[i] = 11;
            continue;
        }

        else if (i == 3)
        {
            offset++;
            pNewArr[i] = 66;
            continue;
        
        }

        pNewArr[i] = Arr[i - offset];
    }

    delete[] Arr; //释放老数组内存
    Arr = pNewArr; //老数组指针指向新数组内存
    
    
    //输出新数组
    for (int i = 0; i < 7; i++) 
    {
        cout << pNewArr[i] << ", ";
    }

    
    delete[] pNewArr; //释放新数组内存
    return 0; 
}
