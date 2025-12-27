#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int num1 , num2;
    cout <<"请输入num1的数字"<< endl;
    cin >> num1;
   
    cout <<"请输入num2的数字"<< endl;
    cin >> num2;


    string value = (num1 > num2) ? "num1大于num2" : "num1小于或等于num2";
    cout << value << endl; 

    return 0; 
}