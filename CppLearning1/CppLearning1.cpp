// CppLearning1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//using namespace std;
#include "CppLearning1.h"  //双引号！  //#include <xxx.h>后面不要接分号。



int print1()    //函数放在头文件中会出现报错：fatal error LNK1169: 找到一个或多个多重定义的符号  //声明和实现要分开，放在h和cpp
{ //这个函数要放在main前面，不然会报错？？？//函数在使用之前要声明

	int a;  //不要忘记分号！
	cout << "type a number\n";
	cin >> a;
	cout << "下一个数是" << a + 1;

	return 0;		// error C4716 : “print1”: 必须返回一个值
}



int main()
{
	std::cout << "Hello World!\n";
	cout << "test upload to github\n";
	print1();
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
