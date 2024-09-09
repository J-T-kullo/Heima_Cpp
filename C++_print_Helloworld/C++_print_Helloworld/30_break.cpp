#include<iostream>
using namespace std;
/*
break:
	用于跳出选择结构或循环体
	-switch
	-循环
	-嵌套循环
*/
int main30() {
	//switch
	cout << "请选择副本难度：" << endl;
	cout << "1. 普通" << endl;
	cout << "2. 中等" << endl;
	cout << "3. 困难" << endl;

	int select = 0;

	cin >> select;

	switch (select) {
	case 1:
		cout << "您选择的是普通难度。" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度。" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度。" << endl;
		break;
	default:
		break;
	}



	//循环语句
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			cout << i << endl;
			break;
		}

	}


	//嵌套循环
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}