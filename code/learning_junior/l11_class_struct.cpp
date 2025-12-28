#include <iostream> 
#include <windows.h> 
using namespace std; 


//class的默认权限是私有
class C1 
{ 
    int m_A;
};

//struct的默认权限是公有
struct C2
{
    int m_B;
};



int main() 
{   
    SetConsoleOutputCP(65001);

    /*
    C1 c1; //error: 'C1' is private
    c1.m_A = 10;
    */
    C2 c2; //ok
    c2.m_B = 10;

    cout << "c2.m_B = " << c2.m_B << endl;

    return 0; 
}