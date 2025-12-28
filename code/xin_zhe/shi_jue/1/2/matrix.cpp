#include <iostream>
using namespace std;
#include <windows.h>

int main() {

    //解决中文乱码问题
    SetConsoleOutputCP(65001);

    // 输入矩阵的维度N
    int N;
    cin >> N;
    
    // 创建N×N的二维数组
    int matrix[10][10];  // 假设最大10×10
    
    // 输入矩阵元素
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // 显示原始矩阵
    cout << "原始矩阵：" << endl;
    int *ptr = &matrix[0][0];  // 指向第一个元素的指针
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << *(ptr + i * N + j) << " ";  // 通过指针访问
        }
        cout << endl;
    }
    
    // 原地旋转90度（顺时针）
    // 思路：先转置，再水平翻转
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // 交换 matrix[i][j] 和 matrix[j][i]
            int *ptr1 = &matrix[0][0] + i * N + j;
            int *ptr2 = &matrix[0][0] + j * N + i;
            int temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
        }
    }
    
    // 水平翻转
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            // 交换 matrix[i][j] 和 matrix[i][N-1-j]
            int *ptr1 = &matrix[0][0] + i * N + j;
            int *ptr2 = &matrix[0][0] + i * N + (N - 1 - j);
            int temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
        }
    }
    
    // 显示旋转后的矩阵
    cout << "旋转后：" << endl;
    ptr = &matrix[0][0];  // 重新指向第一个元素
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << *(ptr + i * N + j) << " ";  // 通过指针访问
        }
        cout << endl;
    }
    
    return 0;
}