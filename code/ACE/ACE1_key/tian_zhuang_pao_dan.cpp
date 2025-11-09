#include <iostream> 
#include <windows.h> 
using namespace std; 

#include <iostream> 
#include <windows.h> 
#include <stdio.h>
#include <stdlib.h>
using namespace std; 

//函数声明
int cmp(const void* a, const void* b);

//结构体！！很重要的，不懂的赶紧学
typedef struct 
{
    int id;
    int time;
} Robot;

//自定义比较函数，若a的time大于b的就返回正数；若小于则返回负数；若相等则返回0
int cmp(const void* a, const void* b) 
{
    return ((Robot*)a)->time - ((Robot*)b)->time;
}

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    int n;
    scanf("%d", &n);
    Robot robots[n];
    
    //初始化
    for (int i = 0; i < n; i++) 
    {
        robots[i].id = i + 1;
        scanf("%d", &(robots[i].time));
    }
    
    //根据自定义比较函数进行排序
    qsort(robots, n, sizeof(Robot), cmp);
    double sum = 0;
    
    //计算最优队列以及总等待时长
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", robots[i].id);  
        sum += robots[i].time * (n - i -1);  
    }
    
    //输出结果
    printf("\n%.2f\n", sum / n);
    return 0;
}


        