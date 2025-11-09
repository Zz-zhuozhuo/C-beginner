#include <iostream>
#include "Windows.h"
#include "cstring"

using namespace std;


int main()
{   
    int num1 = 3;
    int num2 = 5;
    bool r1 = num1 == num2;
    bool r2 = num1 != num2;
     cout << "num1 == num2: " << r1 << endl;
     cout << "num1 != num2: " << r2 << endl;
    

     cout << "3 < 5 : " << (3 < 5) << endl;
     cout << "3 > 5 : " << (3 > 5) << endl;

     return 0;
}