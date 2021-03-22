
//#include <iostream>
//using namespace std;   //在h头文件中声明
#include "CppLearning1.h"  //双引号！  //#include <xxx.h>后面不要接分号。
#include "Bubble_Sort.h"
#include "DirectInsert_Sort.h"
#include "PID_Simple.h"

#include <Eigen/Dense>    //使用前，需要将库文件添加路径： 在解决方案资源管理器中，右键项目名称，选择属性-->C/C++ -->常规-->附加包含目录
using namespace Eigen;     // 改成这样亦可 using Eigen::MatrixXd; 

int print1()    //函数放在头文件中会出现报错：fatal error LNK1169: 找到一个或多个多重定义的符号  //声明和实现要分开，放在h和cpp
{ //这个函数要放在main前面，不然会报错？？？//函数在使用之前要声明

	//int a;  //不要忘记分号！
	cout << "print1 is active\n";
	//cin >> a;
	//cout << "下一个数是" << a + 1;

	return 0;		// error C4716 : “print1”: 必须返回一个值
}
void func1()
{
	cout << "func1 is active\n" << endl;

}

//递归的方法，计算2的c次幂
int tempValue; //存放计算过程值
int mi2(int cc) {

	if (cc == 1) {
		tempValue = 2;
	}
	else {//如果没有else，会使cc递减至负值---递归太深，或者int等类型不支持负值?。有Else时，cc==1使递归截止，直接跳转到return
		tempValue = mi2(cc - 1) * 2;
	}

	return tempValue;

};


int main()
{

	/*
	Class1 Box1;        // 声明 Box1，类型为 Box
	Class1 Box2;        // 声明 Box2，类型为 Box
	Class1 Box3;        // 声明 Box3，类型为 Box
	double volume = 0.0;     // 用于存储体积

	// box 1 详述
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	// box 2 详述
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	// box 1 的体积
	volume = Box1.height * Box1.length * Box1.breadth;
	cout << "Box1 的体积：" << volume << endl;

	// box 2 的体积
	volume = Box2.height * Box2.length * Box2.breadth;
	cout << "Box2 的体积：" << volume << endl;


	// box 3 详述
	Box3.set(16.0, 8.0, 12.0);
	volume = Box3.get();
	cout << "Box3 的体积：" << volume << endl;


	 //print1();
	 //func1();
	*/

	/*
	//冒泡法
		 Bubble_Sort BS1;
		 BS1.getNum();
		 BS1.sortArray();
		 BS1.resultPrint();
	*/

	/*
	//直接插入法
	DirectInsert_Sort DI1;
	DI1.getNum();
	DI1.sortArray();
	DI1.resultPrint();
	*/
	/*

	//简单PID
		PID_Simple PIDS1;
		PIDS1.InputNum();
		PIDS1.OutputNum();

	*/


	/*
		//测试eigen3矩阵库
			MatrixXd m = MatrixXd::Random(3, 3);              //随机生成3*3的double型矩阵
			m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;      //MatrixXd::Constant(3,3,1.2)表示生成3*3的double型矩阵，该矩阵所有元素均为1.2
			cout << "m =" << endl << m << endl;
			VectorXd v(3);        // 定义v为3*1的double型向量
			v << 1, 2, 3;         // 向量赋值
			cout << "v =" << endl << v << endl;
			cout << "m * v =" << endl << m * v << endl;
			system("pause");
		//测试eigen3矩阵库
	*/

	cout << "请输入一个整数N, 用来计算2的N次幂" << endl;
	int tempN;
	cin >> tempN;
	cout << "2的" << tempN << "次幂为  " << mi2(tempN) << endl;


	return 0;
}