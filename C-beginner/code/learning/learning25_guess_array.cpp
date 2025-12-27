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
    
     int num = get_random_num(1, 10);
     cout << "系统随机生成的数字为：" << num << endl;

     //用户逐个逐个输入数字
     int arr[10];
     for(int i=0; i<10; i++)
     {
        cout <<"请第" << i+1 << "次输入数字：" << endl;
        cin >> arr[i];
     }

     //判断数组每个元素是否和猜测数字相同
     int result = 0;
     for(int i=0; i<10; i++)
     {
        if(arr[i] == num)
        {
            result++;
        }
     }

     cout << "用户最终猜对数字的次数为：" << result << "次" << endl;

     return 0;
}