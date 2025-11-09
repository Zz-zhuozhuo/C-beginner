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

int main()
{
        int m, n;//行，列
        printf("输入矩阵行数m和列数n：");
        scanf_s("%d %d", &m, &n);

        int* arr = (int*)malloc(m * n * sizeof(int*));//转置前矩阵
        int* arr_ = (int*)malloc(n * m * sizeof(int*));//转置后矩阵

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
        return 0;
}

void input(int* arr, int m, int n)//矩阵输入
{
        for (int i = 0; i < m; i++)
        {
                for (int j = 0; j < n; j++)
                {
                        scanf_s("%d", (arr + n * i + j));
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