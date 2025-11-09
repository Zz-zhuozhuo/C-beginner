#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);  // 解决中文输出乱码

    int num;
    bool isPrime = true;
    
    cout << "请输入一个正整数：";
    cin >> num;
    
    // 处理特殊情况
    if (num <= 1) {
        isPrime = false;
    }
    // 2是唯一的偶素数
    else if (num == 2) {
        isPrime = true;
    }
    // 其他偶数都不是素数
    else if (num % 2 == 0) {
        isPrime = false;
    }
    // 检查奇数
    else {
        // 只需要检查到平方根
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                isPrime = false;
                break;  // 找到因子就退出循环
            }
        }
    }
    
    // 输出结果
    if (isPrime) {
        cout << num << " 是素数" << endl;
    } else {
        cout << num << " 不是素数" << endl;
    }
    
    return 0;
}