#include<iostream>

using namespace std;
/*
���ݵ����룺�Ӽ��̻�ȡ����
cin >>
*/

int main14() {

	//����
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ��� a = " << a << endl;

	//������
	float b = 3.14f;
	cout << "�������������b��ֵ��" << endl;
	cin >> b;
	cout << "������ b = " << b << endl;

	//�ַ���
	char c = 'a';
	cout << "����ַ��ͱ���c��ֵ��" << endl;
	cin >> c;
	cout << "�ַ��� c = " << c << endl;

	//�ַ�����
	char d[] = "assd";
	cout << "����ַ����ͱ���d��ֵ��" << endl;
	cin >> d;
	cout << "�ַ����� d = " << d << endl;

	//������
	bool e = true;
	cout << "��������ͱ���e��ֵ��" << endl;
	cin >> e; //bool ��0������
	cout << "������ e = " << e << endl;


	system("pause");
	return 0;
}