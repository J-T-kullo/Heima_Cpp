#include<iostream>
using namespace std;
#include<ctime>

int main23() {

	//������
	//ϵͳ���������,�����������ӣ���������ϵͳʱ�����ɵ������
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //rand()%100 ����0~99�����
	cout << num << endl;
	//��ҽ��в���
	int val = 0;

	while (1) {

		cin >> val;
		//�ж���ҵĲ²�

		
		//�´��ˣ���ʾ�µĽ����/С�����²�
		if (val > num) {
			cout << "�²����" << endl;
		}
		else if (val < num) {
			cout << "�²��С" << endl;
		}
		//�¶�  �˳���Ϸ
		else {
			cout << "�¶��ˣ���Ϸ�˳�������" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}