#include "Bubble_Sort.h"


void Bubble_Sort::getNum() {

	cout << "�������������ܸ���";
	cin >> n;
	// ����n����  
	cout << "����������������";
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}
}


void Bubble_Sort::sortArray() {
	//���, ����С��������
	//
	
	for (int k = 0; k < n - 1; k++) {  //����ѭ��
		for (int i = 0; i < n - 1-k; i++) {  //�������������Զ����һ��ѭ�����ȼ�1

			if (a[i] > a[i + 1]) {
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				//�������λ��
			}
		}
	}


}



void Bubble_Sort::resultPrint() {
	//��ӡ�������

	cout << "��ӡ�������" << endl;
	for (int i = 0; i < n;i++) {

		cout << a[i] << endl;
		cout << "  " << endl;
	}

}