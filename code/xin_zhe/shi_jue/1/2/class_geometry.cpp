#include <iostream> 
#include <windows.h> 
#include <string>
using namespace std; 


class Shape 
{
private:
    string m_Color;  

public:
    // 构造函数
    Shape(string color)
    {
        m_Color = color;
        cout << "Shape 构造函数调用了！" << endl;
    }

   
    // 析构函数
    ~Shape()
    {
        cout << "Shape 析构函数调用了！" << endl;
    }

    
    
    // 显示颜色信息
    void displayColor()
    {
        cout << "Shape的颜色:" << m_Color << endl;
    }

    
    
    // 设置颜色
    void setColor(string color)
    {
        m_Color = color;
    }

    
    
    // 获取颜色
    string getColor()
    {
        return m_Color;
    }
};

// 子类：矩形（继承Shape）- 改个名字避免冲突
class Rect : public Shape 
{
private:
    int m_Width;   
    int m_Height;  


public:
    // 构造函数
    Rect(string color, int width, int height) : Shape(color)
    {
        m_Width = width;
        m_Height = height;
        cout << "Rect 构造函数调用了！" << endl;
    }

    
    
    
    // 析构函数
    ~Rect()
    {
        cout << "Rect 析构函数调用了！" << endl;
    }

    
    
    // 计算面积
    int calculateArea()
    {
        return m_Width * m_Height;
    }

    
    
    
    
    // 重写父类的显示颜色函数
    void displayColor()
    {
        cout << "Rect的颜色:" << getColor() << endl;
    }

    
    void setWidth(int width)
    {
        m_Width = width;
    }

    
    void setHeight(int height)
    {
        m_Height = height;
    }

    // 矩形信息显示
    void showRect()
    {
        displayColor();
        cout << "Rect的面积:" << calculateArea() << endl;
    }
};

int main() 
{   
    SetConsoleOutputCP(65001); 

    
    // 创建形状对象
    Shape shape("withe");
    shape.displayColor();
    cout << endl;

    
    // 创建矩形对象
    Rect rect("Blue", 3, 5);
    rect.displayColor();
    cout << "Rect的面积:" << rect.calculateArea() << endl;
    cout << endl;

    

    // 修改矩形对象的颜色
    rect.setColor("Red");
    rect.showRect();
    cout << endl;


    return 0; 
}