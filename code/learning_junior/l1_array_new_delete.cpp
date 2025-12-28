#include <iostream>
#include <windows.h>
using namespace std;

int * func()
{
    //在堆区开辟一个整型空间
    //new返回的是该数据类型的指针
    int * p = new int(10);
    return p;
         
                     
}

void test01()
{
    int * p = func();
    cout << "*p = " << *p << endl;
    delete p; //释放堆区内存
    p = nullptr; //避免野指针
}

//在堆区用new[]开辟一个数组，并用delete[]释放
void test02()
{
    int * array = new int[10]; //开辟10个整型空间

    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    delete[] array; //释放堆区内存
    array = nullptr; //避免野指针
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
    
    






    