#include "Quick_Sort.h"

/* 函数采用递归的思想
https://blog.csdn.net/u012936940/article/details/79672460?ops_request_misc=%25257B%252522request%25255Fid%252522%25253A%252522160974914616780299090203%252522%25252C%252522scm%252522%25253A%25252220140713.130102334..%252522%25257D&request_id=160974914616780299090203&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~baidu_landing_v2~default-1-79672460.first_rank_v2_pc_rank_v29&utm_term=C++%20%E9%80%92%E5%BD%92

*/

void Quick_Sort::Input() {
		
	cout << "how many numbers to be sorted" << endl;
	cin >> n;
	cout << "please input the numbers 1 by 1" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i] ;
	}
	
};


int Partition(int *aa, int b,int c) {
//分区。将小于基准的元素移动到左边；大于基准的元素移动到右边。
	//分区结束后，基准元素所处的位置就是最终排序后它的位置。



	return b;
};




void Quick_Sort::PrintResult() {

	int low = 0; //数组左端
	int high = n- 1; //数组右端

	int PResults = Partition(a, low, high);  //array 形参引用时必须指针？！

	
};