#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001);

    int n;
    cout << "请输入乘船人数：";
    cin >> n;

    if (n <= 15) 
    {
        cout << "人数必须大于15！" << endl;
    }

    
    // people数组，1表示在船上，0表示下船
    int people[100] = {0};
    for (int i = 1; i <= n; i++) 
    {
        people[i] = 1;
    }

    
    
    int current = 1;    // 当前报数的人
    int number = 0;     // 当前报的数字
    int left = n;       // 剩余人数


    
    // 船上只剩15人停止
    while (left > 15) 
    {
        // 只有还在船上的人才报数
        if (people[current] == 1) 
        {
            number++; // 报数
            
            if (number == 7) 
            {
                // 数到7的人下船
                cout << "第" << current << "号下船了" << endl;
                people[current] = 0; // 从船上移除
                left--;              // 剩余人数减1
                number = 0;          // 重新开始报数
            }
        }
        
        // 移动到下一个人
        current++;
        
        // 如果到队尾，回到队首
        if (current > n) 
        {
            current = 1;
        }
    }



    return 0; 
}