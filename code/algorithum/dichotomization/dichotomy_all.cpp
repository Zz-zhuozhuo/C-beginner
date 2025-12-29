#include <iostream>
#include <vector>
using namespace std;

// 基础二分查找：在有序数组中查找目标值，返回索引（不存在返回-1）
int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;  // 初始化左右边界，覆盖整个数组
    
    while (left <= right) {  // 当左边界小于等于右边界时继续循环
        int mid = left + (right - left) / 2;  // 计算中间位置，防止整数溢出
        
        if (nums[mid] == target) {  // 如果中间值等于目标值
            return mid;             // 找到目标，返回索引
        } else if (nums[mid] < target) {  // 如果中间值小于目标值
            left = mid + 1;         // 目标在右半部分，移动左边界
        } else {                    // 如果中间值大于目标值
            right = mid - 1;        // 目标在左半部分，移动右边界
        }
    }
    
    return -1;  // 循环结束未找到，返回-1
}

// 查找第一个等于目标值的位置
int firstEqual(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;  // 初始化左右边界
    
    while (left <= right) {  // 二分查找循环
        int mid = left + (right - left) / 2;  // 计算中间位置
        
        if (nums[mid] >= target) {  // 如果中间值大于等于目标值
            right = mid - 1;        // 向左移动，寻找第一个出现的位置
        } else {                    // 如果中间值小于目标值
            left = mid + 1;         // 向右移动
        }
    }
    
    // 循环结束后，left指向第一个大于等于target的位置
    // 检查left是否在数组范围内且确实等于target
    if (left < nums.size() && nums[left] == target) {
        return left;  // 返回第一个等于target的位置
    }
    return -1;  // 未找到
}

// 查找最后一个等于目标值的位置
int lastEqual(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;  // 初始化左右边界
    
    while (left <= right) {  // 二分查找循环
        int mid = left + (right - left) / 2;  // 计算中间位置
        
        if (nums[mid] <= target) {  // 如果中间值小于等于目标值
            left = mid + 1;         // 向右移动，寻找最后一个出现的位置
        } else {                    // 如果中间值大于目标值
            right = mid - 1;        // 向左移动
        }
    }
    
    // 循环结束后，right指向最后一个小于等于target的位置
    // 检查right是否在数组范围内且确实等于target
    if (right >= 0 && nums[right] == target) {
        return right;  // 返回最后一个等于target的位置
    }
    return -1;  // 未找到
}

// 查找第一个大于等于目标值的位置
int firstGreaterOrEqual(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;  // 初始化左右边界
    
    while (left <= right) {  // 二分查找循环
        int mid = left + (right - left) / 2;  // 计算中间位置
        
        if (nums[mid] >= target) {  // 如果中间值大于等于目标值
            right = mid - 1;        // 向左移动，寻找第一个满足条件的位置
        } else {                    // 如果中间值小于目标值
            left = mid + 1;         // 向右移动
        }
    }
    
    return left;  // left就是第一个大于等于target的位置
}

// 测试函数
void test01() {
    vector<int> nums = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8};  // 创建测试数组
    int target = 4;  // 设置目标值
    
    cout << "数组: ";  // 输出数组内容
    for (int num : nums) cout << num << " ";  // 遍历输出每个元素
    cout << endl;  // 换行
    
    cout << "目标值: " << target << endl;  // 输出目标值
    cout << "基础二分查找位置: " << binarySearch(nums, target) << endl;  // 测试基础二分查找
    cout << "第一个等于4的位置: " << firstEqual(nums, target) << endl;  // 测试查找第一个等于
    cout << "最后一个等于4的位置: " << lastEqual(nums, target) << endl;  // 测试查找最后一个等于
    cout << "第一个大于等于4的位置: " << firstGreaterOrEqual(nums, target) << endl;  // 测试查找第一个大于等于
    
    // 测试不存在的值
    cout << "\n查找不存在的值10:" << endl;  // 输出测试标题
    cout << "基础二分查找: " << binarySearch(nums, 10) << endl;  // 测试查找不存在的值
    cout << "第一个大于等于10的位置: " << firstGreaterOrEqual(nums, 10) << endl;  // 测试查找插入位置
}

// 主函数
int main() {
    test01();  // 调用测试函数
    return 0;  // 程序正常结束
}