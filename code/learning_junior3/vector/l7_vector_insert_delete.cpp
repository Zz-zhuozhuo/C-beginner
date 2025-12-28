#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

//insert(const_iterator pos, ele); 迭代器指向poswei插入元素ele
//insert(const_iterator pos, int count,ele); 迭代器指向poswei插入count个ele
//erase(const_iterator pos); 删除迭代器指向的元素
//erase(const_iterator first, const_iterator last); 删除迭代器first和last之间的元素
//clear(); 清空vector

void printVector(vector<int> &v)
{
    for (vector <int>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector <int> v;
    
    //尾部插入元素
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "尾部插入元素后：";
    printVector(v);




    //尾部删除元素
    v.pop_back();
    cout << "删除元素后：";
    printVector(v);

    //插入，第一个参数是迭代器，第二个参数是值
    v.insert(v.begin(), 10);
    cout << "头部插入10后：";
    printVector(v);

    v.insert(v.begin(), 2, 20);
    cout << "头部插入2个20后：";
    printVector(v);

    //删除，第一个参数是迭代器，第二个参数是个数
    v.erase(v.begin());
    cout << "删除第一个元素后：";
    printVector(v);

    v.erase(v.begin(), v.begin() + 2);
    cout << "删除前两个元素后：";
    printVector(v);

    //全删除
    v.erase(v.begin(), v.end());
    //v.clear();也可以清空
    
    cout << "全部删除后：";
    printVector(v);


}

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    test01();
    return 0;
}