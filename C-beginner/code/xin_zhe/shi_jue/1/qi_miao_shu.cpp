#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    int a, b;
    
    cout << "请输入查找范围的起始值a: ";
    cin >> a;
    cout << "请输入查找范围的结束值b: ";
    cin >> b;
    
    cout << "奇妙数有: ";
    
    // 第一步：遍历该范围内所有整数
    for (int num = a; num <= b; num++) {
        int temp = num;
        int digitCount = 0;
        int sum = 0;
        
        // 依次除以十计算数字的位数
        int quantity = num;
        while (quantity > 0) {
            digitCount++;
            quantity = quantity / 10;
        }
        
        // 第二步：遍历整数中每个组成数字
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;  // 取余数获取当前数字
            
            // 第三步：将这个数字进行位数次方
            int power = 1;
            for (int i = 0; i < digitCount; i++) {
                power = power * digit;
            }
            
            // 第四步：将次方结果相加
            sum = sum + power;
            
            temp = temp / 10;  // 每次取出最后一位，去掉最后一位，避免重复计算
        }
        
        // 第五步：判断是否与这个整数相等
        if (sum == num) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}