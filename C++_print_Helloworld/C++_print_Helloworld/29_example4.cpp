#include<iostream>
using namespace std;
/*
	�˷��ھ���
*/
int main29() {

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < i+1; j++) {
			cout << j << " * " << i << " = " << i * j<<"\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}