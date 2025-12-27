#include <iostream>
using namespace std;
#include <windows.h>

int main()
{

    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    // 输入矩阵的维度N
    int N;
    cin >> N;
    
    // 创建N×N的二维数组
    int matrix[10][10];  // 假设最大10×10
    
    // 输入矩阵元素
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    // 显示原始矩阵
    cout << "原始矩阵：" << endl;
    int *ptr = &matrix[0][0];  
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << *(ptr + i * N + j) << " ";
        }
        cout << endl;
    }
    

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }


    return 0;
}


//燃尽了，再想下去就更乱了，看看别的题吧
//燃尽了，再想下去就更乱了，看看别的题吧
//燃尽了，再想下去就更乱了，看看别的题吧
