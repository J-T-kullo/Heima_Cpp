#include<iostream>
using namespace std;
/*
敲桌子：
	从1开始数到100，如果数字个位含有7，或者数字十位含有7.或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
*/
int main27() {
	for(int i=1;i<101;i++){
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i % 7;

		if ((a == 7) || (b == 7) || (c == 0)) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}

	}

	system("pause");
	return 0;
}