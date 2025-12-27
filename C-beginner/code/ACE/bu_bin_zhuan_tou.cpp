#include <iostream> 
#include <windows.h> 
using namespace std; 




int main()
{
    SetConsoleOutputCP(65001);  // 解决中文输出乱码

    int angle = 360;
    int input_angle;

    cout << "请输入角度：";
    cin >> input_angle;
    int result = input_angle % angle;

   

    if (result > input_angle/2) 
    {
        result = result - angle;
    
    }
    else if (result < -angle/2) 
    {
        result = result + angle;        
    }
    

    cout << result;  

        return 0;
}