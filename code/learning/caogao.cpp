#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

 /*  // 输入字符串
    string str;
    cout << "请输入原始字符串:" << endl;
    cin >> str;

    // 输入要插入的字符串
    string add_str;
    cout << "请输入要插入的字符串:" << endl;
    cin >> add_str;
    

    
    // 在指定位置插入字符串（从0开始计数）
    int pos;
    cout << "请输入插入位置:" << endl;
    cin >> pos;
    str.insert(pos, add_str);
    
    cout << "插入后字符串: " << str << endl;
    
    return 0;
}
    */

    

    int n; // 数组元素个数
    
    // 第一步：输入数组大小
    cout << "请输入数组元素的个数: ";
    cin >> n;
    
    int arr[100]; // 创建数组，最多存放100个数
    
    // 第二步：输入数组的每个元素
    cout << "请输入" << n << "个整数:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // 第三步：检查是否有相等元素
    // 使用两个循环来比较每对元素
    bool foundSame = false; // 用来记录是否找到相同元素
    
    // 外层循环：从第一个元素到倒数第二个元素
    for (int i = 0; i < n; i++) {
        // 内层循环：从外层循环的下一个元素开始到最后一个元素
        for (int j = i + 1; j < n; j++) {
            // 比较两个元素是否相等
            if (arr[i] == arr[j]) {
                foundSame = true; // 找到相同元素，标记为true
                cout << "找到相同的数啦！" << arr[i] << endl;
            }
        }
    }
    
    // 第四步：输出最终结果
    if (foundSame == true) {
        cout << "这个数组中有相等的元素" << endl;
    } else {
        cout << "这个数组中没有相等的元素" << endl;
    }
    
    return 0;
}