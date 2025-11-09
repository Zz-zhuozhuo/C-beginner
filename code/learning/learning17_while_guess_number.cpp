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
    SetConsoleOutputCP(65001); //解决中文乱码

    int num =get_random_num(1, 200); //测试随机数生成
    int guess = 0; //用户猜测的数字
    int frequency = 0; //猜测次数

    bool is_loose = true; //是否猜中
    
    while (is_loose)
    {
        cout << "请输入你猜的数字：";
        cin >> guess;
        frequency++;
        if (guess == num)
        {
            cout << "恭喜你，猜对了！" << endl;
            cout << "你总共猜了" << frequency << "次。" << endl;
            is_loose = false;
        }
        else if (guess > num)
        {
            cout << "猜的数字大了，请再试一次。" << endl;
        }
        else
        {
            cout << "猜的数字小了，请再试一次。" << endl;
        }
    }

    return 0;
}
    
    
