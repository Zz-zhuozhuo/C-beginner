#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    
    int start, end; // 定义区间的开始和结束
    
    cout << "请输入区间的开始值: ";
    cin >> start;
    cout << "请输入区间的结束值: ";
    cin >> end;
    
    cout << "在区间 [" << start << ", " << end << "] 内的质数有:" << endl;
    
    // 遍历区间内的每一个数
    for (int num = start; num <= end; num++) 
    {
        // 质数必须大于1
        if (num <= 1) {
            continue; 
        }
        
        bool isPrime = true;
        
        // 检查当前数是否能被2到num-1之间的任何数整除
        for (int i = 2; i < num; i++) 
        {
            if (num % i == 0) {
                isPrime = false; 
                break; 
            }
        }
        


        // 如果是质数，就输出
        if (isPrime) 
        {
            
            cout << num << " ";
        }

    }
    
    
    return 0;
}