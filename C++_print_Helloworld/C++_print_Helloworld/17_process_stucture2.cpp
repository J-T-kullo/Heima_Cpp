# include<iostream>
using namespace std;
/*
˳��ṹ������˳��ִ�У���������ת
ѡ��ṹ����������ִ����Ӧ�Ĺ���
ѭ���ṹ�����������Ƿ����㣬ѭ�����ִ��ĳ�δ���
*/
int main17() {
	//ѡ��ṹ����������ִ����Ӧ�Ĺ���
	//������if���
	int score = 0;
	cout << "������һ������: " << endl;
	cin >> score;
	cout << "������ķ���Ϊ�� " << score << endl;

	if (score > 600) {
		cout << "��������һ����ѧ��" << endl;
	}
	else if (score > 500) {
		cout << "�������˶�����ѧ��" << endl;
	}
	else if (score > 400) {
		cout << "��������������ѧ��" << endl;
	}
	else {
		cout << "��û���ϱ���~" << endl;
	}

	system("pause");
	return 0;
}