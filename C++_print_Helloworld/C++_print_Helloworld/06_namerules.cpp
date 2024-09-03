#include<iostream>
using namespace std;
/*
标识符命名规则：
	标识符不能是关键字；
	标识符只能由字母、数字、下划线构成；
	第一个字符必须为字母或下划线；
	标识符中字母区分大小写。
建议：命名要有可读性。
*/
int main6() {
	
	//int int = 10;

	int abc = 10;
	int _abc = 20;
	int _123abc = 23;

	//int 1df = 12;

	int AAA = 100;
	cout << AAA << endl;
	//cout << aaa << endl;

	system("pause");
	return 0;
}