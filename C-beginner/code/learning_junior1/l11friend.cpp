#include <iostream>
#include <windows.h>
using namespace std;

//建筑物类
class Building
{
    friend void goodGay(Building *building); //声明好基友函数，可以访问私有成员变量
public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_Bedroom = "卧室";
    }

public:
    string m_SittingRoom;

private:
    string m_Bedroom;
  
};

//全局函数
void goodGay(Building *building)
{
    cout << "好基友全局函数，正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友全局函数，正在访问：" << building->m_Bedroom << endl;
}

void test01()
{
    Building building;
    goodGay(&building);
}


int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    test01();

    return 0;
}