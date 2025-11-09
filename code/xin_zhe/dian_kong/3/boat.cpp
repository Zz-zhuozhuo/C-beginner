#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    int n;
    cout <<"请输入乘船人数：" << endl;
    cin >> n;

    int m = 0; //下船人数

    for (int i = 7; n - i >= 0; i+=7)
    {
        cout << "第" << i << endl;
        m++;
        n -= m; //船剩余人数
        
    }

    return 0; 
}

    
