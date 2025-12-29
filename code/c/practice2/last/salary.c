#include <stdio.h>
#include <string.h>
#include <windows.h>

struct Person
{
    char *name;
    float base;
    float change;
    float pay;
};


int main ()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    struct Person employee[3] = 
    {
        {"zhao", 240.00, 420.00, 45.00},
        {"qian", 360.00, 120.00, 30.00},
        {"sun", 560.00, 0.0, 180.00}
    };

    float total;
    int i;
    for(i = 0; i < 3; i++)
    {
        total = employee[i].base + employee[i].change - employee[i].pay;
        printf("%s的实际工资为：%.2f", employee[i].name, total);
        printf("\n");
    }

    return 0;

}