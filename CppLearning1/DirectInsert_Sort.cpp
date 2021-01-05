#include "DirectInsert_Sort.h"



void DirectInsert_Sort::getNum() {
	cout << "How many numbers to be sorted?"<<endl;
	cin >> n;
	cout << "Please enter the numbers 1 by 1" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
	};

}; //函数结尾要不要加分号

void DirectInsert_Sort::sortArray() {

	for (int i = 1; i < n; i++) {
		int temp = a[i];
		int j;
		for ( j= i-1; j >= 0; j--) {  //寻找方向不要错

			if (i > 0 && temp < a[j]) { 

				a[j+1] = a[j];  //如果此时的temp<a[j],则将此数a[j]向后移动一位
			}
			else {
				// a[j] = temp;  //此处不能用a[i-1], 因为j循环里，i是固定的。
				//break; //能否跳出for循环？ 会跳出内层for
			}
			//break; //能否跳出for循环？ 会跳出外层for
		}
		a[j+1] = temp;  //不能放在for循环里面
		
	}


};

void DirectInsert_Sort::resultPrint() {
	cout << "____Now print the Result____"<<endl;
		for (int i = 0; i < n; i++)
			cout << a[i]<<endl;
};
