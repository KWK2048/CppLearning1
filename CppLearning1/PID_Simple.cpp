// PID�򵥵�C++����ʵ�֡�����ܼ��
//��λ��PID��

#include "PID_Simple.h"



void PID_Simple::InputNum(){
	cout << "������Ŀ��׷��ֵ" << endl;
	cin >> G_targetLocation;
	cout << "������kp" << endl;
	cin >> Kp;
	cout << "������ki" << endl;
	cin >> Ki;
	cout << "������kd" << endl;
	cin >> Kd;

};

void PID_Simple::OutputNum() {
	error_dp = G_targetLocation - G_presentLocation;	//����ϵͳ��һ�μ���kdʱ�� e(k)-e(k-1)��
												//error_dp��ʾe(k-1)
	while (1) {
		error_p = G_targetLocation - G_presentLocation;
		error_i += error_p;
		error_d = error_p - error_dp;
		error_dp = error_p;
		G_presentLocation += Kp * error_p + Ki * error_i + Kd * error_d;
		cout << "��ǰλ��Ϊ��" << G_presentLocation << "��ǰ�����Ϊ" << G_targetLocation - G_presentLocation << endl;
		system("pause");
	}
	system("pause");

};


