#include <iostream> 
#include <windows.h> 
using namespace std; 

void simple_transpose() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    //简易版答案
    #define MAX 100

    int a[MAX][MAX], b[MAX][MAX];
    int m, n;
    printf("m= n= (空格分隔): ");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }

    for (int i = 0; i < n; i++)//行
        for (int j = 0; j < m; j++)//列
        {
            b[i][j] = a[j][i];
        }
    printf("转置后矩阵为：\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}


    //复杂版
    #include <stdio.h>
    #include <stdlib.h>
//复杂版
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int compare(const void* a, const void* b)//用于qsort的比较函数
{
    int* pa = (int*)a;
    int* pb = (int*)b;
    return *pa - *pb;//从小到大排序
}

void input(int* arr, int m, int n);//矩阵输入
void output(int* arr, int m, int n);//矩阵输出
void convert(int* arr0, int* arr1, int m0, int n0);//矩阵转置

void complex_transpose()
{
    int m, n;//行，列
    printf("输入矩阵行数m和列数n：");
    scanf("%d %d", &m, &n);

    int* arr = (int*)malloc(m * n * sizeof(int));//转置前矩阵
    int* arr_ = (int*)malloc(n * m * sizeof(int));//转置后矩阵

    printf("请输入矩阵：\n");
    input(arr, m, n);//输入矩阵

    convert(arr, arr_, m, n);//转置

    for (int i = 0; i < n; i++)//转置后矩阵每行从小到大排序
    {
        qsort(arr_ + i * m, m, sizeof(int), compare);
    }
    printf("转置排序前：\n");
    output(arr, m, n);
    printf("转置排序后：\n");
    output(arr_, n, m);

    //释放
    free(arr);
    free(arr_);
}

void input(int* arr, int m, int n)//矩阵输入
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (arr + n * i + j));
        }
    }
}

void output(int* arr, int m, int n)//矩阵输出
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(arr + n * i + j));
        }
        printf("\n");
    }
}

void convert(int* arr0, int* arr1, int m0, int n0)//矩阵转置
{
    for (int i = 0; i < m0; i++)
    {
        for (int j = 0; j < n0; j++)
        {
            *(arr1 + m0 * j + i) = *(arr0 + n0 * i + j);
        }
    }
}

int main()
{
    // 选择运行哪一个版本
    // simple_transpose();
    complex_transpose();
    return 0;
}
