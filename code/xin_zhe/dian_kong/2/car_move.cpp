#include <iostream>
#include <windows.h>
using namespace std;


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 定义移动模式的枚举
enum MoveMode 
{
    AXIAL = 1,    // 轴向移动
    LINEAR = 2,   // 直线移动  
    PATROL = 3    // 巡回移动
};

// 定义坐标结构体
struct Point 
{
    int x;
    int y;
};

// 定义小车结构体
struct Car 
{
    int id;
    Point position;
    MoveMode mode;
};

// 计算两点间的距离（用于直线移动）
double distance(Point a, Point b) 
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

// 轴向移动：先x轴移动，再y轴移动
vector<Point> axialMove(Point start, Point target) 
{
    vector<Point> path;
    path.push_back(start);
    
    // 先移动到目标x坐标，保持y不变
    Point intermediate = {target.x, start.y};
    path.push_back(intermediate);
    
    // 再移动到目标y坐标
    path.push_back(target);
    
    return path;
}

// 直线移动：直接移动到目标点
vector<Point> linearMove(Point start, Point target) 
{
    vector<Point> path;
    path.push_back(start);
    path.push_back(target);
    return path;
}

// 巡回移动：移动到目标点后返回起点
vector<Point> patrolMove(Point start, Point target) 
{
    vector<Point> path;
    path.push_back(start);
    path.push_back(target);
    path.push_back(start); // 返回起点
    return path;
}

// 根据移动模式选择相应的移动函数
vector<Point> moveCar(Point start, Point target, MoveMode mode) 
{
    switch(mode) {
        case AXIAL:
            return axialMove(start, target);
        case LINEAR:
            return linearMove(start, target);
        case PATROL:
            return patrolMove(start, target);
        default:
            return {start}; // 默认不移动
    }
}

// 打印路径
void printPath(vector<Point> path)
{
    for(int i = 0; i < path.size(); i++) 
    {
        cout << "(" << path[i].x << ", " << path[i].y << ")";
        if(i < path.size() - 1) 
        {
            cout << "->";
        }
    }
    cout << endl;
}

int main() 
{
    
    SetConsoleOutputCP(65001); // 解决输出中文乱码
    
    int carCount;
    
    // 输入小车总数
    cout << "请输入小车总数: ";
    cin >> carCount;
    
    // 创建小车数组
    vector<Car> cars(carCount);
    
    // 输入每辆小车的信息
    cout << "请输入小车信息" << endl;
    for(int i = 0; i < carCount; i++) 
    {
        cout << "id:";
        cin >> cars[i].id;
        
        cout << "坐标:";
        char dummy; // 用于读取括号和逗号
        cin >> dummy >> cars[i].position.x >> dummy >> cars[i].position.y >> dummy;
        
        int modeInput;
        cout << "移动模式(1:轴向; 2:直线; 3.巡回):";
        cin >> modeInput;
        cars[i].mode = static_cast<MoveMode>(modeInput);
    }
    
    // 处理小车移动指令
    int carId;
    Point target;
    
    cout << "请输入小车id和目标坐标:" << endl;
    
    while(true) 
    {
        cout << "id(输入-1结束):";
        cin >> carId;
        
        if(carId == -1) 
        {
            break;
        }
        
        cout << "目标坐标:";
        char dummy;
        cin >> dummy >> target.x >> dummy >> target.y >> dummy;
        
        // 查找指定ID的小车
        Car* targetCar = nullptr;
        for(int i = 0; i < cars.size(); i++) 
        {
            if(cars[i].id == carId) {
                targetCar = &cars[i];
                break;
            }
        }
        
        // 如果找到了小车，执行移动
        if(targetCar != nullptr) {
            // 计算移动路径
            vector<Point> path = moveCar(targetCar->position, target, targetCar->mode);
            
            // 输出路径
            printPath(path);
            
            // 更新小车位置（巡回模式除外）
            if(targetCar->mode != PATROL) 
            {
                targetCar->position = target;
            }
        } 
        
        else 
        {
            cout << "未找到ID为 " << carId << " 的小车！" << endl;
        }
    }
    
    cout << "程序结束" << endl;
    return 0;
}