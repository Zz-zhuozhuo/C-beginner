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
int main() 
{
    SetConsoleOutputCP(65001); 
    bool is_continue = true;

    int frequency = 0; // 猜测次数)
    while (is_continue) 
    {
        cout <<"今天又是新的一天，开始向小妹表白吧！"<< endl;
        cout <<"小美，我喜欢你 "<< endl;
        cout <<"这是我第"<< frequency <<"次表白了！"<< endl;
        frequency++;

        int num = get_random_num(1,20); //生成一个1到20的随机数
        if (num == 1)
        {
            is_continue = false;
            cout << "小妹，你真是个好人！" << endl;
        }

        cout <<"总算表白成功咯！"<< endl;
    }
        return 0;
    
}