#include <stdio.h>
#include <windows.h>

void calculate(float arr[], int n, float *max, float *min, float *average)
{
    int i;
    
    // 初始化最大值和最小值
    *max = arr[0];
    *min = arr[0];
    float sum = 0.0;
    
    // 在一个循环中同时计算最大值、最小值和总和
    for(i = 0; i < n; i++)
    {
        // 累加求和
        sum += arr[i];
        
        // 更新最大值
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        
        // 更新最小值
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
    

    *average = sum / n;
    
    printf("最高分：%.2f\n", *max);
    printf("最低分：%.2f\n", *min);
    printf("平均分：%.2f\n", *average);
}

int main()
{
    SetConsoleOutputCP(65001); // 解决中文乱码
    
    float max_score;
    float min_score;
    float average;
    
    float arr[10];  // 修正：存储10个学生成绩
    printf("请输入十个学生的成绩：\n");
    
    int i;
    for(i = 0; i < 10; i++)  // 修正：循环10次，索引0-9
    {
        printf("学生%d: ", i+1);
        scanf("%f", &arr[i]);  // 修正：使用%f读取float类型
    }
    
    calculate(arr, 10, &max_score, &min_score, &average);
    
    return 0;
}
/*
#include <stdio.h>
#include <windows.h>

void calculate(float arr[], int n, float *max, float *min, float *average)
{
    int i;
    int max_index = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }

    *max = arr[max_index];
    printf("最大值是：%f", *max);


    int min_index = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] < arr[max_index])
        {
            min_index = i;
        }
    }
    *min = arr[min_index];

    printf("最小值是：%f", *min);


    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += arr[i];

    }

    *average = sum / n;
    printf("平均值是：%f", *average);



}

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    float max_score;
    float min_score;
    float average;


    float arr[9];
    printf("请输入十个学生的成绩：");
    
    int i;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    calculate(arr, 9, &max_score, &min_score, &average);
    return 0;
}

*/