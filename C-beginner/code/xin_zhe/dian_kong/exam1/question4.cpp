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

    //产生随机数
    int num = get_random_num(1, 4);

    string arr[5] = {"tiger", "elephant", "girrafe", "panda", "monkey"};

    string key;
    key = arr[num];

    //用户逐个逐个输入数字
    int arr1[4];
    for(int j=0; j<4; j++)
    {
        //判断数组每个元素是否和猜测数字相同
        int result = 0;
        for(int i=0; i<10; i++)
        {
            if(arr[i] == key)
            {
                result++;
            }

            else
            {
                cout <<"错误，请再输一次" << endl;
                 cin >> arr1[i];
            }
        }
        
        cout <<"请第" << j+1 << "次输入：" << endl;
       

    }

    return 0;
}

