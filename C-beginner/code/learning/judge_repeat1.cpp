#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    int n;
    
    // 询问用户要输入几个数字
    cout << "请输入要输入的数字个数: ";
    cin >> n;
    
    // 创建数组存储用户输入的数字
    int numbers[100]; // 假设最多输入100个数字
    
    // 用户输入数字
    cout << "请依次输入" << n << "个整数:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "第" << i + 1 << "个数字: ";
        cin >> numbers[i];
    }
    
    // 显示用户输入的数字
    cout << "\n您输入的数字是: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // 统计重复情况
    cout << "\n=== 重复情况统计 ===" << endl;
    
    bool foundDuplicate = false;
    
    // 检查每个数字
    for (int i = 0; i < n; i++) {
        int currentNumber = numbers[i];
        int count = 0;
        
        // 如果这个数字已经被统计过，就跳过
        bool alreadyCounted = false;
        for (int j = 0; j < i; j++) {
            if (numbers[j] == currentNumber) {
                alreadyCounted = true;
                break;
            }
        }
        
        if (alreadyCounted) {
            continue; // 跳过已经统计过的数字
        }
        
        // 统计当前数字出现的次数
        for (int j = 0; j < n; j++) {
            if (numbers[j] == currentNumber) {
                count++;
            }
        }
        
        // 如果重复次数大于1，说明有重复
        if (count > 1) {
            cout << "数字 " << currentNumber << " 重复了 " << count << " 次" << endl;
            foundDuplicate = true;
        }
    }
    
    if (!foundDuplicate) {
        cout << "没有重复的数字" << endl;
    }
    
    return 0;
}