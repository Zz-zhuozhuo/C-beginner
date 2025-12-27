#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    
    int love;
    cout <<"你喜欢我吗？(1代表喜欢，0代表不喜欢)"<< endl;
    cin >> love;
    
    if (love)
    {
        cout << "你真是太好了，我也喜欢你！" << endl;
    }
    else
    {
        cout << "你真是太坏了，我也不喜欢你！" << endl;
    }
    return 0;
}