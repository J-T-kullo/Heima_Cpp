#include<iostream>
using namespace std;
/*
��Ŀ�����
*/

int main20() {
	//��Ŀ�����

	//������������ a b c
	//��a��b���Ƚϣ����������ֵ��ֵ������c

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a = " << a << "\n" << "b = " << b << endl;


	system("pause");
	return 0;
}