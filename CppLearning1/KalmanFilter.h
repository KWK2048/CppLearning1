#pragma once
#ifndef _KLAMANFILTER_H_
#define _KLAMANFILTER_H_

#include <iostream>
using namespace std;
// ���������
#include <Eigen/Dense> //ʹ��ǰ����Ҫ�����ļ����·���� �ڽ��������Դ�������У��Ҽ���Ŀ���ƣ�ѡ������-->C/C++ -->����-->���Ӱ���Ŀ¼
using namespace Eigen;     // �ĳ�������� using Eigen::MatrixXd; 

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

