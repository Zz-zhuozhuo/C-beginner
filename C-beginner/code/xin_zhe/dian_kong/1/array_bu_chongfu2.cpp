#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

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
    
    

    bool same = true; // 记录是否有相等元素
    
     // 外层循环：从第一个元素到倒数第二个元素
    for (int i = 0; i < quantity; i++)
    {
       
        // 内层循环：从外层循环的下一个元素开始到最后一个元素
        for (int j = i + 1; j < quantity; j++) 
        {
           
            // 比较两个元素是否相等
            if (arr[i] != arr[j]) 
            {   
                //same = false; // 找到了两个不同的元素，则置为false
                cout << arr[i] << ","; // 输出第一个不同的元素
                break; // 跳出内层循环
            }
            cout << "没有相等的元素" << endl; // 输出没有相等的元素
        }
    }

    return 0;
}