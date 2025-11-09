#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    string team;
    cout << "请输入队伍名称：";
    cin >> team;
    
    cout << "Hello," << team << "!" << endl;
    return 0; 
}