#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    // 解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    int n;
    
    // 输入数组大小
    cout << "请输入数组元素个数: ";
    cin >> n;
    
    int arr[100];  // 假设最多100个元素
    
    // 输入数组元素
    cout << "请输入" << n << "个整数:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "第" << i + 1 << "个元素: ";
        cin >> arr[i];
    }
    
    // 显示原始数组
    cout << "原始数组: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // 显示排序后的数组
    cout << "排序后数组: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}