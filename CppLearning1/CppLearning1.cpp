// CppLearning1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//using namespace std;   //在h头文件中声明
#include "CppLearning1.h"  //双引号！  //#include <xxx.h>后面不要接分号。
#include "Bubble_Sort.h"


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
	

	 Bubble_Sort BS1;
	 BS1.getNum();
	 BS1.sortArray();
	 BS1.resultPrint();

	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
