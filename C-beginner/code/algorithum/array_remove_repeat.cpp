#include <iostream>
using namespace std;


/*双指针法：
写指针（writePointer）：指向下一个唯一元素应该存放的位置

读指针（readPointer）：遍历整个数组，寻找新的唯一元
*/

int removeDuplicates(int nums[], int length) {
    // 如果数组为空，直接返回0
    if (length == 0) {
        return 0;
    }
    
    int uniqueIndex = 0;  // 指向唯一元素的最后一个位置
    
    // 从第二个元素开始遍历（因为第一个元素肯定是唯一的）
    for (int i = 1; i < length; i++) {
        // 如果当前元素与前一个唯一元素不同
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;  // 移动到下一个位置
            nums[uniqueIndex] = nums[i];  // 存储新的唯一元素
        }
        // 如果相同，就跳过（不执行任何操作）
    }
    
    // 返回唯一元素的个数（索引+1）
    return uniqueIndex + 1;
}

int main() {
    // 示例1
    int nums1[] = {1, 1, 2};
    int len1 = 3;
    
    cout << "示例1 - 原始数组: ";
    for (int i = 0; i < len1; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    
    int k1 = removeDuplicates(nums1, len1);
    
    cout << "去重后长度: " << k1 << endl;
    cout << "去重后数组: ";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl << endl;
    
    // 示例2
    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int len2 = 10;
    
    cout << "示例2 - 原始数组: ";
    for (int i = 0; i < len2; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;
    
    int k2 = removeDuplicates(nums2, len2);
    
    cout << "去重后长度: " << k2 << endl;
    cout << "去重后数组: ";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;
    
    return 0;
}