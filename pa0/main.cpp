#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;
int main() {
    // 定义原始点P的齐次坐标
    Vector3f P(2, 1, 1);

    // 旋转角度（以弧度为单位）
    float theta = 45 * M_PI / 180; // 将角度转换为弧度

    // 平移距离
    float dx = 1;
    float dy = 2;

    // 构建仿射变换矩阵
    Matrix3f transformation_matrix;
    transformation_matrix << cos(theta), -sin(theta), dx, sin(theta),
        cos(theta), dy, 0, 0, 1;

    // 计算变换后的点的齐次坐标
    Vector3f transformed_point = transformation_matrix * P;

    // 输出变换后的点的坐标
    cout << transformed_point.x() << ", " << transformed_point.y() << ")\n";

    return 0;
}
