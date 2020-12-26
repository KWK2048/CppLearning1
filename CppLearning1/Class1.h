#pragma once

#ifndef _CLASS1_H_
#define _CLASS1_H_ 

/*
中间有许多定义啦声明啦！；；
*/

#include <iostream>
using namespace std;

#endif /*_CLASS1_H_ */





class Class1
{
public:
	double length;   // 长度
	double breadth;  // 宽度
	double height;   // 高度
	// 成员函数声明
	double get(void);
	void set(double len, double bre, double hei);
};
