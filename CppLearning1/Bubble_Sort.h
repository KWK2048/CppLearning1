#pragma once
/*
冒泡排序算法
*/

#ifndef _BUBBLE_SORT_H_
#define _BUBBLE_SORT_H_ 

/*
中间有许多定义啦声明啦！；；
*/

#include <iostream>
using namespace std;

#endif /*_BUBBLE_SORT_H_ */

class Bubble_Sort
{
public:
	int n, a[1000]; //一共n个数，不超过1000，a用来保存这些数
	void getNum();
	void resultPrint();
	void sortArray();
};
