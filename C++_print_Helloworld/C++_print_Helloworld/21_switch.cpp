#include<iostream>
using namespace std;
/*
���ã�ִ�ж�������֧���
switch(���ʽ)
{
	case ���1��ִ����䣻break��
	case ���2��ִ����䣻break��
	...
	default��ִ����䣻break��

}
*/
int main() {
	//switch���
	//����Ӱ���
	//10~9 ����
	//8~7 �ǳ���
	//6~5 һ��
	//5���� 

	int score = 0;
	cout << "please input the score:" << endl;
	cin >> score;
	cout << "your score is:" << score << endl;

	switch(score) {
	case 10:
		cout << "����" << endl;
		break;
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
		cout << "һ��" << endl;
		break;
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "�ã�" << endl;
		break;

	}



	system("pause");
	return 0;
}