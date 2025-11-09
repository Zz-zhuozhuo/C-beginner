#include <iostream> 
#include <windows.h> 
using namespace std; 

//浅拷贝，简单的赋值拷贝操作
//深拷贝，拷贝所有子对象，包括子对象的指针。在堆区重新分配内存，并复制所有数据。

class Person 
{ 
public: 
    Person() 
    { 
        cout << "Person默认构造函数调用" << endl; 
    }
 
    
    Person(int age , int height)
    {
        m_Age = age;
        m_Height = new int(height);//指针接收堆区内存地址
        cout << "Person有参构造函数调用" << endl;
    }

    //自己实现的拷贝构造函数
    Person(const Person& p)
    {
        m_Age = p.m_Age;

        //m_Height = p.m_Height; //浅拷贝，只拷贝指针地址，不拷贝指针指向的堆区内存
        
        //深拷贝，拷贝指针指向的堆区内存
        m_Height = new int(*p.m_Height);
        cout << "Person拷贝构造函数调用" << endl;
    }

    ~Person() 
    { 
        //析构代码，释放堆区内存
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person析构函数调用" << endl; 
    }

    int m_Age; 
    int *m_Height; 
}; 

void tset01() 
{ 
    Person p1(18,160); 
    cout << "p1的年龄为：" << p1.m_Age << endl; 
    cout << "p1的身高为：" << *p1.m_Height << endl; 

    //浅拷贝，简单的赋值拷贝操作

    //编译器自动生成的拷贝构造函数
    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
    cout << "p2的身高为：" << *p2.m_Height << endl; 

    //浅拷贝导致p2.m_Height指向的堆区内存地址和p1.m_Height指向的堆区内存地址相同，导致内存被重复释放两次。
    //先进后出原则，p2先被释放，p1再被释放，导致p2.m_Height指向的堆区内存被释放，导致程序崩溃。
}

    




int main() 
{   
    SetConsoleOutputCP(65001);
    tset01(); 
    return 0; 
}