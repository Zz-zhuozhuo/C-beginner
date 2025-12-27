#include <iostream> 
#include <windows.h> 
using namespace std; 

//立方体类设计
//设计属性
//设计行为 获取面积和体积
//分别利用全局函数，判断两个立方体是否相等

class Cube 
{ 
private: 

    int m_Length; //长 
    int m_Width; //宽 
    int m_Height; //高 

public: 

    //设置长
    void SetLength(int length) 
    { 
        m_Length = length; 
    } 

    //获取长
    int GetLength() 
    { 
        return m_Length; 
    } 

    //设置宽
    void SetWidth(int width) 
    { 
        m_Width = width; 
    } 

    //获取宽
    int GetWidth() 
    { 
        return m_Width; 
    } 

    //设置高
    void SetHeight(int height) 
    { 
        m_Height = height; 
    } 

    //获取高
    int GetHeight() 
    { 
        return m_Height; 
    } 

    //获取面积
    int GetArea() 
    { 
        return 2 * (m_Length * m_Width + m_Length * m_Height + m_Width * m_Height); 
    } 

    //获取体积
    int GetVolume() 
    { 
        return m_Length * m_Width * m_Height; 
    } 


    //判断两个立方体是否相等，利用成员函数重载运算符“==”
    bool isEqual(Cube &c) 
    { 
        if (m_Length == c.GetLength() && m_Width == c.GetWidth() && m_Height == c.GetHeight()) 
        { 
            return true; 
        } 
        else 
        { 
            return false; 
        } 

    } 

    

}; 

//判断两个立方体是否相等
//利用全局函数
bool isEqual(Cube &c1, Cube &c2) 
{ 
    if (c1.GetLength() == c2.GetLength() && c1.GetWidth() == c2.GetWidth() && c1.GetHeight() == c2.GetHeight()) 
    { 
        return true; 
    } 
    else 
    { 
        return false; 
    } 
} 








int main() 
{   
    SetConsoleOutputCP(65001);

    //创建立方体对象
    Cube c1;
    c1.SetLength(5);
    c1.SetWidth(4);
    c1.SetHeight(3);

    cout << "立方体1的面积为：" << c1.GetArea() << endl;
    cout << "立方体1的体积为：" << c1.GetVolume() << endl;

    //创建立方体对象
    Cube c2;
    c2.SetLength(5);
    c2.SetWidth(4);
    c2.SetHeight(3);

    //判断两个立方体是否相等,利用全局函数
    bool result = isEqual(c1, c2);
    if (result) 
    { 
        cout << "两个立方体相等，全局函数" << endl; 
    } 
    else 
    { 
        cout << "两个立方体不相等，全局函数" << endl; 
    } 


    //利用成员函数重载运算符“==”
    result = c1.isEqual(c2);
    if (result) 
    { 
        cout << "两个立方体相等，成员函数" << endl; 
    } 
    else 
    { 
        cout << "两个立方体不相等，成员函数" << endl; 
    } 

    return 0; 
}



