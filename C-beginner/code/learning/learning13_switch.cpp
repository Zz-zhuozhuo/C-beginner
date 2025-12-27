#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001);
    int num;
    cout <<"请给电影打分，10和9是非常好，8和7是好，6和5是一般，4和3是差，2和1是非常差："<< endl;
    cin >> num;

    switch (num)
    {
        case 10:
        case 9:
            cout << "非常好" << endl;    
            break;
        case 8:
        case 7:
            cout << "好" << endl;    
            break;
        case 6:
        case 5:
            cout << "一般" << endl;    
            break;
        case 4:
        case 3:
            cout << "差" << endl;    
            break;
        case 2:
        case 1:
            cout << "非常差" << endl;    
            break;
        default:
            cout << "输入错误" << endl;
            break;
    }

    return 0;
}