#include <iostream>
using namespace std;


/*想象你有两叠已经排好序的卡片：

每次从两叠卡片的最上面取较小的那张

放到新的 pile 中

当一叠卡片用完时，把另一叠剩下的全部拿过来

最后在新的 pile 中找中间的那张（或两张）卡片
*/

double findMedianSortedArrays(int nums1[], int m, int nums2[], int n) {
    // 合并后的数组
    int merged[2000];  // 最大可能长度 m+n <= 2000
    int i = 0, j = 0, k = 0;
    
    // 合并两个有序数组
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }
    
    // 如果nums1还有剩余元素
    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }
    
    // 如果nums2还有剩余元素
    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }
    
    int total = m + n;
    
    // 计算中位数
    if (total % 2 == 1) {
        // 奇数个元素，中位数是中间那个
        return merged[total / 2];
    } else {
        // 偶数个元素，中位数是中间两个的平均值
        int mid1 = merged[total / 2 - 1];
        int mid2 = merged[total / 2];
        return (mid1 + mid2) / 2.0;
    }
}

int main() {
    // 示例1
    int nums1_1[] = {1, 3};
    int nums2_1[] = {2};
    double result1 = findMedianSortedArrays(nums1_1, 2, nums2_1, 1);
    cout << "示例1结果: " << result1 << endl;
    
    // 示例2
    int nums1_2[] = {1, 2};
    int nums2_2[] = {3, 4};
    double result2 = findMedianSortedArrays(nums1_2, 2, nums2_2, 2);
    cout << "示例2结果: " << result2 << endl;
    
    return 0;
}