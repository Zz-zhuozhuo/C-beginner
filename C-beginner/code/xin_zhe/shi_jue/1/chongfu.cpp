#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码
    
    int quantity; // 数组元素个数
    
    // 第一步：输入数组大小
    cout << "请输入数组元素的个数: ";
    cin >> quantity;
    
    int arr[100]; // 创建数组，最多存放100个数
    
    // 第二步：输入数组的每个元素
    cout << "请输入" << quantity << "个整数:" << endl;
    for (int i = 0; i < quantity; i++) 
    {
        cin >> arr[i];
    }
    
    // 第三步：找出重复出现次数最多的元素
    int maxCount = 0; // 记录最大重复次数
    int mostFrequentElement = arr[0]; // 记录出现次数最多的元素
    
    // 遍历数组中的每个元素
    for (int i = 0; i < quantity; i++) 
    {
        int currentCount = 0; // 当前元素的出现次数
        
        // 统计当前元素在数组中出现的次数
        for (int j = 0; j < quantity; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                currentCount++;
            }
        }
        
        // 如果当前元素的出现次数大于最大次数，更新最大值
        if (currentCount > maxCount) 
        {
            maxCount = currentCount;
            mostFrequentElement = arr[i];
        }
    }
    
    // 第四步：输出结果
    if (maxCount > 1) 
    {
        cout << "重复出现次数最多的元素是: " << mostFrequentElement << endl;
    } 
    
    else 
    {
        cout << "数组中没有重复的元素" << endl;
    }
    
    return 0;
}