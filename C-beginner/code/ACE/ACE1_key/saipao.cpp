#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码


    float x, y, t;
    scanf("%f %f %f", &x, &y, &t);
    
    //计算英雄休息时步兵走了多远
    float rest_distance = x * t;
    //计算速度之差
    float D_speed = y - x;
    //计算英雄追上步兵所需时间
    float catch_time = rest_distance / D_speed;
    //计算在总的一段时间里英雄或步兵的位移
    float max_distance = y * catch_time;
    
    //输出结果
    printf("%.1f\n", max_distance);

    return 0;
}