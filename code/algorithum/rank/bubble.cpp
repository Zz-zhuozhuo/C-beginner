#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "=== 数组排序程序（冒泡排序） ===" << endl;
    
    // 第一步：获取数组大小
    cout << "请输入要排序的数字个数: ";
    cin >> size;
    
    // 创建数组
    int numbers[100];  // 假设最多处理100个数字
    
    // 第二步：输入数组元素
    cout << "请依次输入" << size << "个整数:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "数字" << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    // 显示输入的数组
    cout << "你输入的数组: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // 第三步：冒泡排序
    cout << "开始冒泡排序..." << endl;
    
    for (int i = 0; i < size - 1; i++) {
        cout << "第" << i + 1 << "轮排序: ";
        
        for (int j = 0; j < size - i - 1; j++) {
            // 比较相邻元素
            if (numbers[j] > numbers[j + 1]) {
                // 交换元素
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                
                cout << "交换" << numbers[j + 1] << "和" << numbers[j] << " ";
            }
        }
        cout << endl;
        
        // 显示当前轮次的结果
        cout << "当前数组: ";
        for (int k = 0; k < size; k++) {
            cout << numbers[k] << " ";
        }
        cout << endl;
    }
    
    // 第四步：显示最终结果
    cout << "=== 排序完成 ===" << endl;
    cout << "排序后的数组: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}