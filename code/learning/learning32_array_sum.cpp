#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    int scores[3][3] = {{80, 70, 90}, {60, 80, 70}, {70, 90, 80}};
    
    string names[3] = {"张三", "李四", "王五"};

    //统计总分
    int sum = 0; 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += scores[i][j];
        }
        
        cout << names[i] << "的总分为：" << sum << endl;
    }

    return 0; 
}