#pragma once
#ifndef _PID_SIMPLE_H
#define _PID_SIMPLE_H

#include <iostream>
using namespace std;


#endif // !_QUICK_SORT_H

class PID_Simple {
public:

double G_targetLocation = 0.0;	//Ŀ��׷��λ��
double G_presentLocation = 0.0;	//Ŀ�굱ǰλ��
//float Kp(0), Ki(0), Kd(0);
float Kp, Ki, Kd;


double error_p = 0;		//kp���
double error_i = 0;		//ki���
double error_d = 0;		//kd���
double error_dp = 0;	//��һ�ε�kp�����ڼ���kd���

void InputNum();
void OutputNum();
};


