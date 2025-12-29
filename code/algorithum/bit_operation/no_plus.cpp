#include <iostream>
using namespace std;

// 不使用四则运算的加法
int add(int a, int b) {
    while (b != 0) {
        // 计算进位
        int carry = a & b;
        
        // 计算不考虑进位的和
        a = a ^ b;
        
        // 进位左移一位，作为下一轮加数
        b = carry << 1;
    }
    return a;
}

int main() {
    int a = 15, b = 7;
    cout << a << " + " << b << " = " << add(a, b) << endl;
    
    a = -5, b = 3;
    cout << a << " + " << b << " = " << add(a, b) << endl;
    
    return 0;
}