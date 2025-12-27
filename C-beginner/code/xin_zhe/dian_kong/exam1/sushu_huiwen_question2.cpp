#include <iostream> 
#include <windows.h> 
using namespace std; 

void reverseString(string &s)
{
    
    int start = 0;           // 起始位置
    int end = s.length() - 1;    // 结束位置
    
    while (start < end)
    {
        // 交换开头和结尾的字符
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        // 向中间移动
        start++;
        end--;
    }
}







int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int start, end; // 定义区间的开始和结束
    
    int start = 100;
    int end = 1000;
    
    cout << "在区间 [" << start << ", " << end << "] 内的质数有:" << endl;
    
    
    for (int num = start; num <= end; num++) 
    {
        // 质数必须大于1
        if (num <= 1)
        {
            continue; 
        }
        
        bool isPrime = true;
        
        // 检查当前数是否能被2到num-1之间的任何数整除
        for (int i = 2; i < num; i++) 
        {
            if (num % i == 0)
            {
                isPrime = false; 
                break; 
            }
        }


        
    }
        

    //判断是否为回文数
    bool isNum = true;
    
    for (int num3 = start; num3 <= end; num3++)
    {
        int num2;
        num2 = num3;
        
        reverseString(num3);

        //回文数为num2
        if (num2 = num3);
        {    
            isNum = false;
        }

    }
    
    //输出有几个回文素数
    for ()

    cout << "共有" << << "个回文素数" << endl;


    return 0;
}



    


    


    
    
    return 0;
}