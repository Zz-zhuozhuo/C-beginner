#include <iostream>
#include <string>
#include <algorithm>  // 用于reverse函数
#include <windows.h>
using namespace std;

int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    string a, b;
    
    cout << "请输入第一个二进制数: ";
    cin >> a;
    cout << "请输入第二个二进制数: ";
    cin >> b;
    
    string result = "";  // 存储结果
    int carry = 0;       // 进位
    int i = a.length() - 1;  // a的最后一个字符索引
    int j = b.length() - 1;  // b的最后一个字符索引
    
    // 从右向左逐位相加
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;  // 当前位的和，初始为进位值
        
        // 如果a还有位，加上a的当前位
        if (i >= 0) {
            sum += a[i] - '0';  // 将字符'0'或'1'转换为数字0或1
            i--;
        }
        
        // 如果b还有位，加上b的当前位
        if (j >= 0) {
            sum += b[j] - '0';  // 将字符'0'或'1'转换为数字0或1
            j--;
        }
        
        // 计算当前位的结果和进位
        result += (sum % 2) + '0';  // 当前位：sum % 2，再转回字符
        carry = sum / 2;            // 进位：sum / 2
    }
    
    // 反转结果字符串，因为我们是倒着构建的
    reverse(result.begin(), result.end());
    
    cout << "二进制和: " << result << endl;
    
    return 0;
}