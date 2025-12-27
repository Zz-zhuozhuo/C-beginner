#include <iostream>
#include <windows.h>
using namespace std;

class Building;

class GoodGay
{
public:
    GoodGay();

    ~GoodGay();

    void  visit(); //参观函数，访问Building中的属性

    Building *building;//指向建筑物对象的指针
};



class Building
{
    friend class GoodGay; //声明GoodGay类为友元类
public:
    Building();


public:
    string m_SettingRoom;

private:
    string m_BedRoom;
};


//类外写成员函数
Building::Building()
{
    this -> m_SettingRoom = "客厅";
    this -> m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    //在堆区中创建建筑物对象
    building = new Building();
}

//释放堆区内存
GoodGay::~GoodGay()
{
    delete building;
}

void GoodGay::visit()
{
    cout << "好基友类正在参观" << building->m_SettingRoom << endl;
    cout << "好基友类正在参观" << building->m_BedRoom << endl;
}


void test01()
{
    GoodGay gg;
    gg.visit();
}





int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码

    test01();

    return 0;
}