#include <iostream>
#include <windows.h>
#include <iostream>
#include <cmath>  // 用于 pow() 和 sqrt() 函数
using namespace std;



//直接用斐波那契数列通项公式求解斐波那契数列第n项


int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码


    int n;
    
    cout << "请输入要查找的斐波那契数列项数 (如第5项输入5): ";
    cin >> n;
    
    // 计算黄金比例 φ 和 ψ
    double phi = (1 + sqrt(5)) / 2;    // φ = (1 + √5) / 2
    double psi = (1 - sqrt(5)) / 2;    // ψ = (1 - √5) / 2
    
    // 使用通项公式计算第n项
    double result = (pow(phi, n) - pow(psi, n)) / sqrt(5);
    
    // 输出结果（四舍五入到最接近的整数）
    cout << "斐波那契数列第 " << n << " 项是: " << round(result) << endl;
    
    return 0;
}