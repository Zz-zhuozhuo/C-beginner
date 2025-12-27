#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码

    string group;

    cout <<"请输入神秘字符区分组别"<<endl;
    cout <<"陈组联系字符：nizhidaomani nidoubuzhidaonidou niwanquanbuzhidao nizhidaomachenzu"<<endl;
    cout <<"橙组联系字符：duimachengzu duideduide buduichengzu budui oduideduide"<<endl;
   
    cin >> group;
   
    string group1 = "nizhidaomani nidoubuzhidaonidou niwanquanbuzhidao nizhidaomachenzu";
    string group2 = "duimachengzu duideduide buduichengzu budui oduideduide";

    //输入陈组或橙组字符，输出对应组别
    if (strcmp(group.c_str(), group1.c_str()) == 0)
    {
        cout << "chen"<<endl;
    }
    else if (strcmp(group.c_str(), group2.c_str()) == 0)
    {
        cout << "orange"<<endl;
    }
      
   
    else
    {
        cout << "error"<<endl;
    }

    return 0;
}