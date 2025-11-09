#include <iostream> 
#include <windows.h> 
using namespace std; 

 int add (int num1, int num2)
    {
        int sum =  num1 + num2;
        return sum;
    }



int main() 
{   
    SetConsoleOutputCP(65001);

    int a = 10, b = 20;
    int c = add(a, b);
    cout << "The sum of " << a << " and " << b << " is " << c << endl;

    return 0;
}