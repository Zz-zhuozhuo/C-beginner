#include <iostream> 
#include <windows.h> 
using namespace std; 

class Point 
{ 
private: 
    int m_X; 
    int m_Y; 
public: 
    //设置x
    void SetX(int x) 
    { 
        m_X = x; 
    } 
    
    //设置y
    void SetY(int y) 
    { 
        m_Y = y; 
    } 
    
    //获取x
    int GetX() 
    { 
        return m_X; 
    } 
    
    //获取y
    int GetY() 
    { 
        return m_Y; 
    } 
}; 



//圆类类内的点类
class Circle 
{ 
private: 
    int m_R;
    Point m_Center; //在类中可以让另一个类作为成员变量
public: 
    //设置半径
    void SetR(int r) 
    { 
        m_R = r; 
    } 
    
    //获取半径
    int GetR() 
    { 
        return m_R; 
    } 
    
    
    //设置圆心
    void SetCenter(Point center) 
    { 
        m_Center = center; 
    } 
    
    
    //获取圆心
    Point GetCenter() 
    { 
        return m_Center; 
    } 
}; 


//判断点和圆的关系
void isIncircle(Circle &c, Point &p)
{   
    //计算两点距离平方
    int distance = (p.GetX() - c.GetCenter().GetX())*(p.GetX() - c.GetCenter().GetX()) + 
    (p.GetY() - c.GetCenter().GetY())*(p.GetY() - c.GetCenter().GetY());

    //计算半径平方
    int rDistance = c.GetR() * c.GetR();

    //判断是否在内切
    if (distance = rDistance)
    {
        cout << "点" << p.GetX() << "," << p.GetY() << "在圆上" << endl;
    }

    else if (distance < rDistance)
    {
        cout << "点" << p.GetX() << "," << p.GetY() << "在圆内" << endl;
    }

    else
    {
        cout << "点" << p.GetX() << "," << p.GetY() << "在圆外" << endl;
    }
}




int main() 
{   
    SetConsoleOutputCP(65001);

    Circle c;
    c.SetR(5);
    Point center;
    center.SetX(3);
    center.SetY(4);
    c.SetCenter(center);

    Point p1, p2, p3;
    p1.SetX(2);
    p1.SetY(3);
    p2.SetX(4);
    p2.SetY(5);
    p3.SetX(6);
    p3.SetY(7);

    isIncircle(c, p1);
    isIncircle(c, p2);
    isIncircle(c, p3);

    return 0; 
}

