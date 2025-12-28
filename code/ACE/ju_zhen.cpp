#include <iostream> 
#include <windows.h> 
using namespace std; 




int main()
{
    SetConsoleOutputCP(65001);  // 解决中文输出乱码
    
    int rows, cols;
    
    cout << "请输入矩阵的行数: ";
    cin >> rows;
    cout << "请输入矩阵的列数: ";
    cin >> cols;
    
    // 定义矩阵
    int matrix[10][10];  // 假设最大10x10
    int transposed[10][10];
    
    // 输入矩阵元素
    cout << "\n请输入矩阵元素:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
    
    // 显示原始矩阵
    cout << "\n原始矩阵:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << "\t";  
        }
        cout << endl;
    }
    
    // 倒置矩阵
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    // 显示倒置后的矩阵
    cout << "\n倒置后的矩阵:" << endl;
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            cout << transposed[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}