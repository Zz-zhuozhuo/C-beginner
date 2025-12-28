#include <stdio.h>
#include <windows.h>
#include <string.h>

struct Student
{
    int id;
    char name[20];
    float math;
    float computer;
    float sum;
    float average;
};


int main()
{
     SetConsoleOutputCP(65001); //解决中文乱码

    struct Student stu[3];
    printf("请输入三位同学的信息：学号、 姓名、数学成绩、计算机成绩，空格隔开：\n");

    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d %s %f %f", &stu[i].id, stu[i].name, &stu[i].math, &stu[i].computer);

        stu[i].sum = stu[i].math + stu[i].computer;
        stu[i].average = stu[i].sum / 2.0;
    
    }

    
    for(i = 0; i < 2; i++)
    {
        int j;
        for(j = 0; j < 2 - i; j++)
        {
            if(stu[j].sum < stu[j + 1].sum)
            {
                struct Student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;

            }
            
        }
    }

    


    
    for(i = 0; i < 3; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", 
            stu[i].id,
            stu[i].name,
            stu[i].math,
            stu[i].computer,
            stu[i].sum,
            stu[i].average);
        
        
    }
    return 0;
}