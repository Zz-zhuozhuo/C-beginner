#include <iostream>
#include <windows.h>
using namespace std;

using namespace std;

// 移动模式的枚举
enum MoveMode 
{
    AXIAL = 1,    // 轴向移动
    LINEAR = 2,   // 直线移动  
    PATROL = 3    // 巡回移动
};

// 坐标结构体
struct Point 
{
    int x;
    int y;
};

// 小车结构体
struct Car 
{
    int id;
    Point position;
    MoveMode mode;
};


int distance(Point a, Point b) 
{

    //输入小车信息
    //用循环遍历后续输入的小车信息
    //根据输入的控制信息对小车进行移动
    
    //燃尽了，这题好难弄，只能先这样。。。。。。