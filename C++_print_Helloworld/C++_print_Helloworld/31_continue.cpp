#include<iostream>
using namespace std;
/*
continue��䣺
	��ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
*/
int main31() {

	//continue���
	for (int i = 0; i <= 100; i++) {
		//��������������ż�������
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}


	system("pause");
	return 0;
}