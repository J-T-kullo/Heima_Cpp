#include<iostream>
using namespace std;
/*
�����ӣ�
	��1��ʼ����100��������ָ�λ����7����������ʮλ����7.���߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
*/
int main27() {
	for(int i=1;i<101;i++){
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i % 7;

		if ((a == 7) || (b == 7) || (c == 0)) {
			cout << "������" << endl;
		}
		else {
			cout << i << endl;
		}

	}

	system("pause");
	return 0;
}