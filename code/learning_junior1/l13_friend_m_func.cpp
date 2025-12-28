#include <iostream>
#include <windows.h>
using namespace std;

class Building;

class GoodGay
{
public:
    GoodGay();

    ~GoodGay();

    void visit(); //访问Building的私有成员函数

    void visit2(); //不可访问Building的私有成员函数

    Building *building;
};



class Building
{

    friend void GoodGay::visit(); //声明为好基友类访问Building的私有成员函数
public:
    Building();
    string m_SettingRoom;

private:
    string m_BedRoom;
};


//类外实现成员函数
Building::Building()
{
    m_SettingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building();
}

//释放内存
GoodGay::~GoodGay()
{
    delete building;
}


void GoodGay::visit()
{
    cout << "好基友类正在参观" << building->m_SettingRoom << endl;
    cout << "好基友类正在参观" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
    cout << "好基友类正在参观" << building->m_SettingRoom << endl;
    //cout << "好基友类正在参观" << building->m_BedRoom << endl; //不可访问
}


void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}



int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}