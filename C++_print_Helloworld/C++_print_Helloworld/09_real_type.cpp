#include<iostream>
using namespace std;
/*
�����ȣ�float 4�ֽ� 7��Ч����
˫���ȣ�double 8�ֽ� 15-16��Ч����
Ĭ������£������С��������ʾ6λ��Ч����
��ѧ��������float f2 = 3e2;//3*10^2
*/


int main9() {

	float f1 = 3.14f;
	double d1 = 3.14;

	cout << "f1=" << f1 << endl;
	cout << "f1ռ���ֽڣ�" << sizeof(f1) << endl;

	cout << "d1=" << d1 << endl;
	cout << "d1ռ���ֽڣ�" << sizeof(d1) << endl;

	float f2 = 3e2; //3*10^2

	cout << "f2=" << f2 << endl;

	float f3 = 3e-2f; //3*10^(-2)

	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}