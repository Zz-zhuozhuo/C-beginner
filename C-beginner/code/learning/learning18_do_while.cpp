#include <iostream>
#include <windows.h>
#include <random>
using namespace std;


int get_random_num(int min , int max)
{
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dis(min, max);
   int random_num = dis(gen);
   return random_num;
}


int main()
{
    SetConsoleOutputCP(65001);

    int num =get_random_num(1, 100); //测试随机数生成
    int guess = 0; //用户猜测的数字
    int count = 0; //用户猜测次数

    do
    {
        cout << "请输入一个数字：";
        cin >> guess;
        count++;

        if (guess < num)
        {
            cout << "猜小了，请再试一次！" << endl;
        }
        else if (guess > num)
        {
            cout << "猜大了，请再试一次！" << endl;
        }
        else
        {
            cout << "恭喜你，猜对了！" << endl;
            cout << "你总共猜了" << count << "次！" << endl;
            break;
        }
    
    } while (guess!= num); // 循环条件为true，永远循环下去
}




    

