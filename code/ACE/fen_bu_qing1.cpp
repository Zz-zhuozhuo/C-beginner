#include <iostream> 
#include <windows.h> 
#include <string>  
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); // 解决中文乱码

    string group;

    cout << "请输入神秘字符区分组别" << endl;
    cout << "陈组联系字符：nizhidaomani nidoubuzhidaonidou niwanquanbuzhidao nizhidaomachenzu" << endl;
    cout << "橙组联系字符：duimachengzu duideduide buduichengzu budui oduideduide" << endl;
   
    // 使用getline读取整行输入和空格
    getline(cin, group);
   
    string group1 = "nizhidaomani nidoubuzhidaonidou niwanquanbuzhidao nizhidaomachenzu";
    string group2 = "duimachengzu duideduide buduichengzu budui oduideduide";

   //判断输入的内容是否符合预期
    if (group == group1)
    {
        cout << "chen" << endl;
    }
    else if (group == group2)
    {
        cout << "orange" << endl;
    }
    else
    {
        cout << "error" << endl;
    }

    return 0;
}