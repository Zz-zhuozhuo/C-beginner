#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码
    cout <<"年龄18岁以下或者身高150cm以下的同学：可免费游玩！"<< endl;
    
    int age, height;
    cout <<"请输入你的年龄："<< endl;
    cin >> age;
    cout <<"请输入你的身高（单位：cm）："<< endl;
    cin >> height;

    if (age < 18 ||  height < 150)
    {
        cout <<"恭喜你，你符合免费游玩的条件！"<< endl;
    }
    else
    {
        cout <<"很遗憾，你不符合免费游玩的条件！"<< endl;
    }
    return 0;
}