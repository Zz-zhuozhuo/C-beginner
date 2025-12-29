#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    
    cout << "请输入一个正整数：";
    cin >> num;
    
    // 处理特殊情况
    if (num < 2)
    {
        isPrime = false;
    }
    else if (num == 2)
    {
        isPrime = true;
    }
    else if (num % 2 == 0)
    {
        isPrime = false;
    }
    else
    {
        // 检查奇数
        for (int i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    
    // 输出结果
    if (isPrime)
    {
        cout << num << " 是质数" << endl;
    }
    else
    {
        cout << num << " 不是质数" << endl;
    }
    
    return 0;
}