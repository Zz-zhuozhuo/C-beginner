#include <iostream>
#include <windows.h>
using namespace std;


int main() {
    //解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    int n;
    
    cout << "请输入数字个数: ";
    cin >> n;
    
    int arr[100];
    
    // 输入数字
    for (int i = 0; i < n; i++) {
        cout << "数字" << i+1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\n重复统计:" << endl;
    
    // 对每个数字进行检查
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int times = 0;
        
        // 检查这个数字是否在前面已经出现过
        bool skip = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == num) {
                skip = true;
                break;
            }
        }
        
        if (skip) continue;
        
        // 统计这个数字出现的总次数
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                times++;
            }
        }
        
        // 输出重复信息
        if (times > 1) {
            cout << num << " 出现了 " << times << " 次" << endl;
        }
    }
    
    return 0;
}