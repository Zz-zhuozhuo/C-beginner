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
    SetConsoleOutputCP(65001);
    int guess_num;
    cout << "请输入一个猜测数字:" << endl;
    cin >> guess_num;

    int count = 0;
    while (guess_num != num) 
    {
        count++;
        cout <<"不好意思猜错了，猜测次数为"<< count <<"次" << endl;
        

        if (guess_num > num) 
        {
            cout << "你猜的数字太大了，请重新输入一个数字:" << endl;
            cin >> guess_num;
        } 
        else 
        {
            cout << "你猜的数字太小了，请重新输入一个数字:" << endl;
            cin >> guess_num;
        }
    }

    cout << "恭喜你，猜对了！" << endl;
    cout << "你总共猜了" << count << "次" << endl;

    return 0;
}

    
  
    
    