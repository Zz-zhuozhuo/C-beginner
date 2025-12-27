#include <iostream>
using namespace std;


/*简单的双指针搜索：
查找开始位置：从数组开头向后遍历，找到第一个等于target的位置

查找结束位置：从数组末尾向前遍历，找到最后一个等于target的位置

处理未找到：如果没找到，返回[-1, -1]
*/
void findTargetRange(int nums[], int n, int target) {
    int start = -1, end = -1;
    
    cout << "在数组 [";
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "] 中查找 " << target << endl;
    
    // 查找开始位置（从前往后）
    cout << "查找开始位置: ";
    for (int i = 0; i < n; i++) {
        cout << "检查位置 " << i << " (值=" << nums[i] << ")";
        if (nums[i] == target) {
            start = i;
            cout << " → 找到！开始位置 = " << i << endl;
            break;
        } else {
            cout << " → 不匹配" << endl;
        }
    }
    
    // 查找结束位置（从后往前）
    cout << "查找结束位置: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << "检查位置 " << i << " (值=" << nums[i] << ")";
        if (nums[i] == target) {
            end = i;
            cout << " → 找到！结束位置 = " << i << endl;
            break;
        } else {
            cout << " → 不匹配" << endl;
        }
    }
    
    cout << "结果: [" << start << ", " << end << "]" << endl;
    cout << "------------------------" << endl;
}

int main() {
    cout << "=== 查找目标值范围程序 ===" << endl;
    cout << endl;
    
    // 示例1
    int nums1[] = {5, 7, 7, 8, 8, 10};
    findTargetRange(nums1, 6, 8);
    
    // 示例2
    int nums2[] = {5, 7, 7, 8, 8, 10};
    findTargetRange(nums2, 6, 6);
    
    // 示例3
    int nums3[] = {};
    findTargetRange(nums3, 0, 0);
    
    return 0;
}