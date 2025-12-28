#include <iostream> 
#include <windows.h> 
using namespace std; 

struct element
{
    string name;
    string type;
    int overplus;
    float price;
};

int main() 
{   
    SetConsoleOutputCP(65001);

    element ele[3] = { 
        {"C", "100nf", 10000, 3.0}, 
        {"R", "10k", 10000, 3.0}, 
        {"H", "10uh", 10000, 2.0} 
    };

    // 显示元件列表
    cout << "元件列表: C, R, H" << endl;
    
    //输入元件名称
    string searchName;
    cout << "请输入操作: ";
    cin >> searchName;

    // 查找元件
    element * ptr = nullptr;
    
   //通过name查找元件 
    for(int i = 0; i < 3; i++) 
    {
        if(ele[i].name == searchName) 
        {
            ptr = &ele[i];
        }
    }

    //判断元件是否存在，防止空指针危险
    if(ptr == nullptr) 
    {
        cout << "元件不存在！" << endl;
        return 1;
    }

    cout << "当前库存: " << ptr->overplus << endl;
    
    int newStock;
    cout << "拿取数量: ";
    cin >> newStock;

    if(newStock > ptr->overplus) 
    {
        cout << "新库存不能大于当前库存！" << endl;
    } 
    
    
    else 
    {
        ptr->overplus -= newStock;
        cout << "成功 " << endl;
        cout <<"元件剩余信息:" << endl;
        cout << "名称: " << ptr->name << endl;
        cout << "类型: " << ptr->type << endl;
        cout << "当前库存: " << ptr->overplus << endl;
        cout << "价格: " << ptr->price << endl;
    }

    return 0;
}