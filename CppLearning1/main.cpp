
//#include <iostream>
//using namespace std;   //��hͷ�ļ�������
#include "CppLearning1.h"  //˫���ţ�  //#include <xxx.h>���治Ҫ�ӷֺš�
#include "Bubble_Sort.h"
#include "DirectInsert_Sort.h"
#include "PID_Simple.h"

#include <Eigen/Dense>    //ʹ��ǰ����Ҫ�����ļ����·���� �ڽ��������Դ�������У��Ҽ���Ŀ���ƣ�ѡ������-->C/C++ -->����-->���Ӱ���Ŀ¼
using namespace Eigen;     // �ĳ�������� using Eigen::MatrixXd; 

int print1()    //��������ͷ�ļ��л���ֱ���fatal error LNK1169: �ҵ�һ���������ض���ķ���  //������ʵ��Ҫ�ֿ�������h��cpp
{ //�������Ҫ����mainǰ�棬��Ȼ�ᱨ������//������ʹ��֮ǰҪ����

	//int a;  //��Ҫ���Ƿֺţ�
	cout << "print1 is active\n";
	//cin >> a;
	//cout << "��һ������" << a + 1;

	return 0;		// error C4716 : ��print1��: ���뷵��һ��ֵ
}
void func1()
{
	cout << "func1 is active\n" << endl;

}

//�ݹ�ķ���������2��c����
int tempValue; //��ż������ֵ
int mi2(int cc) {

	if (cc == 1) {
		tempValue = 2;
	}
	else {//���û��else����ʹcc�ݼ�����ֵ---�ݹ�̫�����int�����Ͳ�֧�ָ�ֵ?����Elseʱ��cc==1ʹ�ݹ��ֹ��ֱ����ת��return
		tempValue = mi2(cc - 1) * 2;
	}

	return tempValue;

};


int main()
{

	/*
	Class1 Box1;        // ���� Box1������Ϊ Box
	Class1 Box2;        // ���� Box2������Ϊ Box
	Class1 Box3;        // ���� Box3������Ϊ Box
	double volume = 0.0;     // ���ڴ洢���

	// box 1 ����
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	// box 2 ����
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	// box 1 �����
	volume = Box1.height * Box1.length * Box1.breadth;
	cout << "Box1 �������" << volume << endl;

	// box 2 �����
	volume = Box2.height * Box2.length * Box2.breadth;
	cout << "Box2 �������" << volume << endl;


	// box 3 ����
	Box3.set(16.0, 8.0, 12.0);
	volume = Box3.get();
	cout << "Box3 �������" << volume << endl;


	 //print1();
	 //func1();
	*/

	/*
	//ð�ݷ�
		 Bubble_Sort BS1;
		 BS1.getNum();
		 BS1.sortArray();
		 BS1.resultPrint();
	*/

	/*
	//ֱ�Ӳ��뷨
	DirectInsert_Sort DI1;
	DI1.getNum();
	DI1.sortArray();
	DI1.resultPrint();
	*/
	/*

	//��PID
		PID_Simple PIDS1;
		PIDS1.InputNum();
		PIDS1.OutputNum();

	*/


	/*
		//����eigen3�����
			MatrixXd m = MatrixXd::Random(3, 3);              //�������3*3��double�;���
			m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;      //MatrixXd::Constant(3,3,1.2)��ʾ����3*3��double�;��󣬸þ�������Ԫ�ؾ�Ϊ1.2
			cout << "m =" << endl << m << endl;
			VectorXd v(3);        // ����vΪ3*1��double������
			v << 1, 2, 3;         // ������ֵ
			cout << "v =" << endl << v << endl;
			cout << "m * v =" << endl << m * v << endl;
			system("pause");
		//����eigen3�����
	*/

	cout << "������һ������N, ��������2��N����" << endl;
	int tempN;
	cin >> tempN;
	cout << "2��" << tempN << "����Ϊ  " << mi2(tempN) << endl;


	return 0;
}