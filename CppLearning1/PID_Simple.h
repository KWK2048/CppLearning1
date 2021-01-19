#pragma once
#ifndef _PID_SIMPLE_H
#define _PID_SIMPLE_H

#include <iostream>
using namespace std;


#endif // !_QUICK_SORT_H

class PID_Simple {
public:

double G_targetLocation = 0.0;	//目标追踪位置
double G_presentLocation = 0.0;	//目标当前位置
//float Kp(0), Ki(0), Kd(0);
float Kp, Ki, Kd;


double error_p = 0;		//kp误差
double error_i = 0;		//ki误差
double error_d = 0;		//kd误差
double error_dp = 0;	//上一次的kp误差、用于计算kd误差

void InputNum();
void OutputNum();
};


