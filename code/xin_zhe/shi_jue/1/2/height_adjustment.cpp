#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    // 输入测试用例数量
    int T;
    cout << "请输入测试用例数量：";
    cin >> T;
    
    for (int t = 0; t < T; t++)
    {
        
        int N;  // 学生人数
        cout << "请输入学生人数：";
        cin >> N;
        
        
        
        int heights[1000];  // 存储学生身高
        int count[1001] = {0};  // 统计每个身高出现的次数
        
       
       
        // 输入学生身高并统计
        for (int i = 0; i < N; i++)
        {
            cout << "请输入第" << i+1 << "个学生身高：";
            cin >> heights[i];
            count[heights[i]]++;  // 对应身高计数加1
        }
        
        
        
        // 统计需要改变的学生数量
        int change = 0;
        
        
        
        // 遍历所有可能的身高
        for (int i = 1; i <= 1000; i++)
        {
            if (count[i] == 1)
            {
                // 如果某个身高只出现一次，则需要改变
                change++;
            }
        }
        
       
       
        // 如果所有学生身高都不同，保留两个相同身高
        if (change == N)
        {
            change = N - 2;
        }
        
        cout << change << endl;
    }
    
    return 0;
}