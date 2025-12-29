#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, num;
    
    // 获取数组大小
    cout << "请输入数组元素个数：";
    cin >> n;
    
    // 动态输入数组元素
    cout << "请输入 " << n << " 个整数：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    
    cout << "原始数组：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 选择排序
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;  // 假设当前位置是最小值
        
        // 在剩余元素中寻找真正的最小值
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;  // 更新最小值位置
            }
        }
        
        // 将找到的最小值与当前位置交换
        swap(arr[i], arr[min_index]);
        
        // 显示每轮排序结果（可选）
        cout << "第 " << i + 1 << " 轮排序后：";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    // 输出最终排序结果
    cout << "排序后的数组：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}