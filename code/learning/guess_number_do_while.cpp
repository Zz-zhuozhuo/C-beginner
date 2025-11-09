#include <iostream>
#include <windows.h>
using namespace std;
#include <random>

// 生成[min, max]之间的随机整数
int get_random_num(int min, int max) 
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    int random_num = dis(gen);
    return random_num;
}

int num = get_random_num(1,100); //生成一个1到100的随机数

int main() 
{
     SetConsoleOutputCP(65001); //解决中文乱码
    
     int guess_num;
    do
    {   
        int count = 0;
        cout << "请输入一个猜测数字:" << endl;
        cin >> guess_num;

        if (guess_num > num) 
        {
            cout << "你猜的数字太大了，请重新输入一个数字:" << endl;
            
        } 
       

        else if (guess_num < num)   
        {  
            cout << "你猜的数字太小了，请重新输入一个数字:" << endl;
        }
       
        
        else if (guess_num == num)
        {
            cout << "恭喜你，猜对了！" << endl;

        }
       
    } while (guess_num != num);
    return 0;
}