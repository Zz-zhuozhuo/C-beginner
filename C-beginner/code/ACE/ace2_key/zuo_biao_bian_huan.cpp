#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    // 定义初始点P的坐标
    Vector3d P_A(1, 1, 2);

    // 定义旋转矩阵：绕z轴逆时针旋转23度
    double theta_z = 23 * M_PI / 180; // 将角度转换为弧度
    Matrix3d R_z;
    R_z = AngleAxisd(theta_z, Vector3d::UnitZ());
    R_z(0,1) = -R_z(1,0);
    R_z(1,0) = R_z(0,1);
    R_z(2,0) = -R_z(0,2);
    R_z(0,2) = R_z(2,0);

    // 定义旋转矩阵：绕x轴逆时针旋转75度
    double theta_x = 75 * M_PI / 180; // 将角度转换为弧度
    Matrix3d R_x;
    R_x = AngleAxisd(theta_x, Vector3d::UnitX());
    R_x(1,2) = -R_x(2,1);
    R_x(2,1) = R_x(1,2);

    // 计算坐标系B下的点P坐标
    Vector3d P_B = R_z * P_A;

    // 计算坐标系C下的点P坐标
    Vector3d P_C = R_x * P_B;

    // 定义平移向量
    Vector3d t(0, 4, 0);

    // 计算最终坐标
    Vector3d P_final = P_C + t;

    // 输出结果
    cout << "最终坐标系C下的坐标为: (" << P_final.x() << ", " << P_final.y() << ", " << P_final.z() << ")" << endl;

    return 0;
}