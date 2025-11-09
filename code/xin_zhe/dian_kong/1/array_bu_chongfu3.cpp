#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); // 解决中文乱码

    int quantity; // 数组元素个数
    
    // 输入数组大小
    cout << "请输入数组元素的个数: ";
    cin >> quantity;
    
    int arr[100]; // 创建数组，最多存放100个数
    
    // 输入数组的每个元素
    cout << "请输入" << quantity << "个整数:" << endl;
    for (int i = 0; i < quantity; i++) 
    {
        cin >> arr[i];
    }
    
    // 第一步：对数组进行排序（从小到大）
    for (int i = 0; i < quantity; i++) 
    {
        for (int j = i + 1; j < quantity; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                // 交换位置
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // 第二步：找出并输出不重复的元素
    cout << "数组中没有重复的元素: ";
    
    bool foundUnique = false; // 标记是否找到了不重复的元素
    
    for (int i = 0; i < quantity; i++) 
    {
        // 检查当前元素是否重复
        bool isUnique = true;
        
        // 检查前一个元素
        if (i > 0 && arr[i] == arr[i-1]) 
        {
            isUnique = false;
        }
        
        // 检查后一个元素
        if (i < quantity-1 && arr[i] == arr[i+1]) 
        {
            isUnique = false;
        }
        
        // 如果当前元素是唯一的，就输出
        if (isUnique) 
        {
            if (foundUnique) 
            {
                cout << ",";
            }
            cout << arr[i];
            foundUnique = true;
        }
    }
    
    // 如果没有找到不重复的元素
    if (!foundUnique) 
    {
        cout << "没有不重复的元素";
    }
    
    cout << endl;
    
    return 0;
}