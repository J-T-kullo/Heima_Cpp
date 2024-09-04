#include<iostream>
using namespace std;
/*
有三只小猪，分别输入他们的体重，并且判断谁最重。
*/

int main19() {
	int w1 = 0;
	int w2 = 0;
	int w3 = 0;

	int max_pig = 0;

	cout << "Please input the weight of the 1st pig:" << endl;
	cin >> w1;
	cout << "Please input the weight of the 2st pig:" << endl;
	cin >> w2;
	cout << "Please input the weight of the 3st pig:" << endl;
	cin >> w3;

	cout << "three pig's weight:" << w1 << "," << w2 << "," << w3 << "." << endl;

	if (w1 > w2) {
		if (w1 > w3) {
			max_pig = 1;
		}
		else {
			max_pig = 3;
		}
	}
	else {
		if (w2 > w3) {
			max_pig = 2;
		}
		else {
			max_pig = 3;
		}
	}
	cout << "the most weight pig:" << max_pig << "." << endl;

	system("pause");
	return 0;
	}