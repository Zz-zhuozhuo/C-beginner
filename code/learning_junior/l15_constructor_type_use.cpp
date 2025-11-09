#include <iostream> 
#include <windows.h> 
using namespace std; 


//构造函数的分类和调用
//分类：
//1.默认构造函数：无参构造函数，不带参数的构造函数，默认调用，无需显示调用，系统自动调用。
//2.拷贝构造函数：拷贝构造函数，复制构造函数，参数为const引用，系统自动调用。
//3.自定义构造函数：自定义构造函数，参数为自定义类型，系统自动调用。
class Person 
{
public:
    int age;
    Person()
    {
        cout << "Person 无参(默认)构造函数调用了！" << endl;
    }

    Person(int a)
    {   
        age = a;
        cout << "Person 有参构造函数调用了！" << a << endl;
    }

    Person(const Person &p)
    {   
        //将传入的对象所有属性值拷贝到本对象中
        age = p.age;
        cout << "Person 拷贝构造函数调用了！" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数调用了！" << endl;
    }
};

void test01()
{
       /*
       //括号法
    Person p1; //调用默认构造函数，不能加（），因为编译器会认为是函数声明而非函数调用
    Person p2(10); //调用有参构造函数
    Person p3(p2); //调用拷贝构造函数

    cout << "p1 age:" << p1.age << endl;
    cout << "p2 age:" << p2.age << endl;
    cout << "p3 age:" << p3.age << endl;
}
    */
    Person p1; //调用默认构造函数
    Person p2 = Person(10); //调用有参构造函数
    Person p3 = Person(p2); //调用拷贝构造函数

    //不可利用拷贝构造函数初始化匿名对象，编译器会认为Person(p3)===Person p3，导致调用默认构造函数
   // Person(p3);



   //隐式转换法
    Person p4 = 10; //调用有参构造函数，相当于Person p4 = Person(10)
    Person p5 = p4; //调用拷贝构造函数，相当于Person p5 = Person(p4)
}



int main() 
{   
    SetConsoleOutputCP(65001);

    test01();

    return 0;
}