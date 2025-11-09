#include <iostream>
#include <windows.h>
using namespace std;

enum Colour
{
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    cout <<"小朋友们，你们喜欢什么颜色？0红色，1绿色，2蓝色，3黄色"<< endl;
    int num;
    cin >> num;
    switch (num)
    {
        case RED:
            cout << "你喜欢红色！" << endl;    
            break;
        case GREEN:
            cout << "你喜欢绿色！" << endl;    
            break;
        case BLUE:
            cout << "你喜欢蓝色！" << endl;    
            break;
        case YELLOW:
            cout << "你喜欢黄色！" << endl;    
            break;
        default:
            cout << "输入错误" << endl;
            break;
    }
    return 0;
}
