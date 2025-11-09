#include <iostream>
using namespace std;

/*更简单的理解方式：
想象你有两个已经排好序的队列：

从两个队列的末尾开始比较

每次取较大的那个放到结果队列的末尾

这样就不会覆盖前面还需要用的元素
*/

void merge(int nums1[], int m, int nums2[], int n) {
    // 使用三个指针从后往前合并
    int pointer1 = m - 1;        // 指向nums1的最后一个有效元素
    int pointer2 = n - 1;        // 指向nums2的最后一个元素
    int mergePointer = m + n - 1; // 指向合并后的最后一个位置
    
    cout << "开始合并过程..." << endl;
    
    // 从后往前比较两个数组的元素
    while (pointer1 >= 0 && pointer2 >= 0) {
        cout << "比较 nums1[" << pointer1 << "]=" << nums1[pointer1] 
             << " 和 nums2[" << pointer2 << "]=" << nums2[pointer2];
        
        if (nums1[pointer1] > nums2[pointer2]) {
            // 如果nums1的当前元素更大，放到后面
            nums1[mergePointer] = nums1[pointer1];
            cout << " → 取nums1的元素: " << nums1[pointer1] << endl;
            pointer1--;
        } else {
            // 如果nums2的当前元素更大或相等，放到后面
            nums1[mergePointer] = nums2[pointer2];
            cout << " → 取nums2的元素: " << nums2[pointer2] << endl;
            pointer2--;
        }
        mergePointer--;
    }
    
    // 如果nums2还有剩余元素（nums1已经处理完）
    cout << "处理nums2剩余元素..." << endl;
    while (pointer2 >= 0) {
        nums1[mergePointer] = nums2[pointer2];
        cout << "复制 nums2[" << pointer2 << "]=" << nums2[pointer2] 
             << " 到位置 " << mergePointer << endl;
        pointer2--;
        mergePointer--;
    }
    
    // 如果nums1还有剩余元素，它们已经在正确位置，不需要移动
    if (pointer1 >= 0) {
        cout << "nums1剩余元素已在正确位置" << endl;
    }
}

int main() {
    cout << "=== 合并两个有序数组 ===" << endl;
    
    // 示例1
    cout << "\n--- 示例1 ---" << endl;
    int arr1[6] = {1, 2, 3, 0, 0, 0};
    int arr2[3] = {2, 5, 6};
    int m1 = 3, n1 = 3;
    
    cout << "nums1 (前" << m1 << "个有效): ";
    for (int i = 0; i < m1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "nums2: ";
    for (int i = 0; i < n1; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    merge(arr1, m1, arr2, n1);
    
    cout << "合并结果: ";
    for (int i = 0; i < m1 + n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    return 0;
}