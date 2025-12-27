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

    
    bool is_continue = true;
    int count = 0;
    
    while (is_continue)   
    {
        int num =get_random_num(1, 20); //测试随机数生成器
        count++;
        cout << "第" << count << "次猜测：" << num << endl;


        cout << "今天又是新的一天，开始向小美表白" << endl;
        cout << "小美，我喜欢你！" << endl;

        int i = 0;
        while (i <3)
        {
            cout << "送给小美一朵玫瑰花吧！" << endl;
            i++;
        }

        if (num == 1)
        {
            is_continue = false;
        }
    }

    cout << "总算表白成功了！" << endl;
    return 0;
}

