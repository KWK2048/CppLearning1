#include "Bubble_Sort.h"


void Bubble_Sort::getNum() {

	cout << "请输入待排序的总个数";
	cin >> n;
	// 输入n个数  
	cout << "请输入待排序的数字";
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}
}


void Bubble_Sort::sortArray() {
	//输出, 按从小到大排列
	//
	
	for (int k = 0; k < n - 1; k++) {  //完整循环
		for (int i = 0; i < n - 1-k; i++) {  //将最大数推向最远，下一次循环长度减1

			if (a[i] > a[i + 1]) {
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				//如果交换位置
			}
		}
	}


}



void Bubble_Sort::resultPrint() {
	//打印结果数组

	cout << "打印结果数组" << endl;
	for (int i = 0; i < n;i++) {

		cout << a[i] << endl;
		cout << "  " << endl;
	}

}