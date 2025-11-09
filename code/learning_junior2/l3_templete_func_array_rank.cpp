#include <iostream>
#include <windows.h>
using namespace std;

//选择算法模板，从大到小
template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

//打印数组模板
template <class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//选择排序模板
template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {   
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }

        if (max != i)
        {
            mySwap(arr[i], arr[max]);
            
        }
    }
        
    
}
void test01()
{
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArray(charArr, num);
}


void test02()
{
    int intArr[] = { 5, 3, 8, 6, 2, 7, 1, 4 };
    int num = sizeof(intArr) / sizeof(int);
    mySort(intArr, num);
    printArray(intArr, num);
}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    test02();
    return 0;
}