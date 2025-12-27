#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    int scores[3][3] = { {80, 70, 90}, {85, 75, 95}, {88, 78, 98} };
    string names[3] = { "张三", "李四", "王五" };

    for (int i = 0; i < 3; i++) 
    {

        int sum = 0; 

        for (int j = 0; j < 3; j++) 
        {
            cout << scores[i][j] << " ";
            sum += scores[i][j]; 
        }
        
        cout << names[i] << "个人的总分为：" << sum << endl; 
    }

    return 0; 
} 