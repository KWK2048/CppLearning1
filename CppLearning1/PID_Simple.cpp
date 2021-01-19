// PID简单的C++代码实现、代码很简短
//（位置PID）

#include "PID_Simple.h"



void PID_Simple::InputNum(){
	cout << "请输入目标追踪值" << endl;
	cin >> G_targetLocation;
	cout << "请输入kp" << endl;
	cin >> Kp;
	cout << "请输入ki" << endl;
	cin >> Ki;
	cout << "请输入kd" << endl;
	cin >> Kd;

};

void PID_Simple::OutputNum() {
	error_dp = G_targetLocation - G_presentLocation;	//整个系统第一次计算kd时、 e(k)-e(k-1)、
												//error_dp表示e(k-1)
	while (1) {
		error_p = G_targetLocation - G_presentLocation;
		error_i += error_p;
		error_d = error_p - error_dp;
		error_dp = error_p;
		G_presentLocation += Kp * error_p + Ki * error_i + Kd * error_d;
		cout << "当前位置为：" << G_presentLocation << "当前的误差为" << G_targetLocation - G_presentLocation << endl;
		system("pause");
	}
	system("pause");

};


