#include "DirectInsert_Sort.h"



void DirectInsert_Sort::getNum() {
	cout << "How many numbers to be sorted?"<<endl;
	cin >> n;
	cout << "Please enter the numbers 1 by 1" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
	};

}; //������βҪ��Ҫ�ӷֺ�

void DirectInsert_Sort::sortArray() {

	for (int i = 1; i < n; i++) {
		int temp = a[i];
		int j;
		for ( j= i-1; j >= 0; j--) {  //Ѱ�ҷ���Ҫ��

			if (i > 0 && temp < a[j]) { 

				a[j+1] = a[j];  //�����ʱ��temp<a[j],�򽫴���a[j]����ƶ�һλ
			}
			else {
				// a[j] = temp;  //�˴�������a[i-1], ��Ϊjѭ���i�ǹ̶��ġ�
				//break; //�ܷ�����forѭ���� �������ڲ�for
			}
			//break; //�ܷ�����forѭ���� ���������for
		}
		a[j+1] = temp;  //���ܷ���forѭ������
		
	}


};

void DirectInsert_Sort::resultPrint() {
	cout << "____Now print the Result____"<<endl;
		for (int i = 0; i < n; i++)
			cout << a[i]<<endl;
};
