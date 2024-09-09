#include<iostream>
using namespace std;
/*
goto:
	可以无条件跳转语句
	goto 标记;
*/
int main33() {
	//goto

	cout << "1. xxx" << endl;
	cout << "2. xxx" << endl;
	goto FLAG;
	cout << "3. xxx" << endl;
	cout << "4. xxx" << endl;
	FLAG:
	cout << "5. xxx" << endl;


	system("pause");
	return 0;
}