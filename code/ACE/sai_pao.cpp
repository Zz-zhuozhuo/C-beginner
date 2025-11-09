#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码问题

    int x;
    int y;
    int t;
    
    cout << "请输入步兵的速度: ";
    cin >> x;
    
    cout << "请输入英雄的速度: ";    
    cin >> y;
    
    cout << "请输入英雄睡觉的时间: ";
    cin >> t;
    
    int long_distance = x*y*t/(y-x); // 英雄睡觉期间，步兵前进的距离
    cout << "英雄睡觉期间，步兵前进的距离为: " << long_distance << endl;

    return 0;
}