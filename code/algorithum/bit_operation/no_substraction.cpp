#include <iostream>
#include <bit_operation.h>
using namespace std;

// 不使用四则运算的减法：a - b = a + (-b)
int subtract(int a, int b) {
    // 计算b的补码（取反加一）
    int negative_b = add(~b, 1);
    
    // a + (-b)
    return add(a, negative_b);
}

int main() {
    int a = 15, b = 7;
    cout << a << " - " << b << " = " << subtract(a, b) << endl;
    
    a = 5, b = 8;
    cout << a << " - " << b << " = " << subtract(a, b) << endl;
    
    return 0;
}