#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& records) {
    int left = 0;
    int right = records.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // 如果中间元素的值等于其索引，说明缺失元素在右侧
        if (records[mid] == mid) {
            left = mid + 1;
        } 
        // 否则缺失元素在左侧
        else {
            right = mid - 1;
        }
    }
    
    return left;
}

int main() {
    // 示例1
    vector<int> records1 = {0, 1, 2, 3, 5};
    cout << "示例1输出: " << findMissingNumber(records1) << endl;
    
    // 示例2
    vector<int> records2 = {0, 1, 2, 3, 4, 5, 6, 8};
    cout << "示例2输出: " << findMissingNumber(records2) << endl;
    
    // 可以添加用户输入功能
    /*
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;
    
    vector<int> records(n);
    cout << "请输入" << n << "个升序整数: ";
    for (int i = 0; i < n; i++) {
        cin >> records[i];
    }
    
    cout << "缺失的数字是: " << findMissingNumber(records) << endl;
    */
    
    return 0;
}