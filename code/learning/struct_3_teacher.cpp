#include <iostream> 
#include <windows.h> 
using namespace std; 


struct student 
{
    string sname;
    int score;
};


struct teacher 
{
    string tname;

    // 定义一个数组，存放学生信息
    struct student sArray[5];
};


void allocateSpace(struct teacher tArry[], int len) 
{
    string tname;
    string sname;
    int score;

    for (int i = 0; i < len; i++) 
    {

        string nameSeed = "ABCDE";
        // 给老师赋值
        
        for (int i = 0; i <len; i++)
    }
}

int main() 
{
    SetConsoleOutputCP(65001); //解决中文乱码

    //创建三名老师数组
    struct teacher tArry[3];

    //通过给3名老师的信息赋值，并给老师带的学生信息赋值
    int len = sizeof(tArry) / sizeof(tArry[0]);
    allocateSpace(tArry, len);
    
