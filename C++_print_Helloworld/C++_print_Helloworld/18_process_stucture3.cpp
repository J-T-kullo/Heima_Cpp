# include<iostream>
using namespace std;
/*
˳��ṹ������˳��ִ�У���������ת
ѡ��ṹ����������ִ����Ӧ�Ĺ���
ѭ���ṹ�����������Ƿ����㣬ѭ�����ִ��ĳ�δ���
*/
int main18() {
	//ѡ��ṹ����������ִ����Ӧ�Ĺ���
	//Ƕ��if���
	int score = 0;
	cout << "������һ������: " << endl;
	cin >> score;
	cout << "������ķ���Ϊ�� " << score << endl;

	if (score > 600) {
		cout << "��������һ����ѧ��" << endl;
		if (score > 700) {
			cout << "�����ϱ�����ѧ��" << endl;
		}
		else if (score > 650) {
			cout << "�������廪��ѧ��" << endl;
		}
		else {
			cout << "�����������ѧ��" << endl;
		}
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