#include <stdio.h>

struct Student
{
    char name[20];
    int score;
};

int main()
{
    int amount;
    struct Student stu[100];

    scanf("%d", &amount);

    for(int i = 0; i < amount; i++)
    {
        scanf("%d %s", &stu[i].score, &stu[i].name);
    }

    
    int max_score = stu[0].score;
    int max_index = 0;
    for(int i = 1; i < amount; i++)
    {
        if(stu[i].score > max_score)
        {
            max_score = stu[i].score;
            max_index = i;
        }
    }

    printf("The highest score is %d by %s\n", max_score, stu[max_index].name);

    return 0;
}