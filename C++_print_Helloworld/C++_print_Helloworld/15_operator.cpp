#include<iostream>

using namespace std;
/*
��������
1. ��������������ڴ�����������
	+
	-
	*
	/
	%
	++
	--
2. ��ֵ����������ڽ����ʽ��ֵ��������
	=
	+=
	-=
	*=
	/=
	%=
3. �Ƚ�����������ڱ��ʽ�ıȽϣ�������һ����ֵ����ֵ
	==
	!=
	<
	>
	<=
	>=
4. �߼�����������ڸ��ݱ��ʽ��ֵ������ֵ���ֵ
	!
	&&
	||
*/
int main15() {
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //����������������������������С������ȥ��
							 //�������������������Ϊ0
							 //����С���������

	//ȡģ��ȡ�ࣩ %
	cout << a1 % b1 << endl; //ȡģ��������Ϊ0
							 //����С������ȡģ

	//��ǰ/���ã����� ++
	//��ǰ/���ã��ݼ� --
	//1. ǰ�õ���
	int a = 10;
	cout << "a = " << ++a << endl; //�ñ���+1
	//2. ���õ���
	cout << "a = " << a++ << endl; 
	//3. ǰ���õ�����
	//ǰ�ã��ȼ���+1�ٱ��ʽ����
	//���ã��ȱ��ʽ�����ټ���+1
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//��ֵ����
	int aa = 10;
	cout << "aa = " << aa << endl;
	//=
	aa = 100;
	cout << "aa = " << aa << endl;
	aa = 10;
	//+=
	aa += 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	//-=
	aa -= 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	//*=
	aa *= 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	///=
	aa /= 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	//%=
	aa %= 3;
	cout << "aa = " << aa << endl;
	aa = 10;

	//�Ƚ�����
	int bb1 = 10;
	int bb2 = 20;
	// ==
	cout << (bb1 == bb2) << endl;
	// !=
	cout << (bb1 != bb2) << endl;
	// <
	cout << (bb1 < bb2) << endl;
	// >
	cout << (bb1 > bb2) << endl;
	// <=
	cout << (bb1 <= bb2) << endl;
	// >=
	cout << (bb1 >= bb2) << endl;

	//�߼�����
	bool cc1 = true;
	bool cc2 = false;
	// !
	cout << (!cc1) << endl;
	// &&
	cout << (cc1&&cc2) << endl;
	// ||
	cout << (cc1||cc2) << endl;

	system("pause");
	return 0;
}