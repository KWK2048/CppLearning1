#pragma once
#ifndef _KLAMANFILTER_H_
#define _KLAMANFILTER_H_

#include <iostream>
using namespace std;
// 矩阵运算库
#include <Eigen/Dense> //使用前，需要将库文件添加路径： 在解决方案资源管理器中，右键项目名称，选择属性-->C/C++ -->常规-->附加包含目录
using namespace Eigen;     // 改成这样亦可 using Eigen::MatrixXd; 

#endif 


class KalmanFilter
{
public:
	
	Matrix2d F;
	Vector2d X;
	Vector2d B;
	double Positon;
	double Velocity;
	double a;
	double Q;
	double Z;




};

