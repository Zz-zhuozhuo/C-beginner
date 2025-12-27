#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    int num1 = 10;
    int num2 = 20;

    //const int * p = &num1;  指向可变，数据不可变
    const int * p = &num2; 
    cout << "*p = " << *p << endl;

    p = &num1; //指向可变，数据不可变
    cout << "*p = " << *p << endl;


    //const int * const p = &num1;  //指向不可变，数据也不可变
    //int * const p = &num1;  //指向不可变，数据可变
    return 0;
}

