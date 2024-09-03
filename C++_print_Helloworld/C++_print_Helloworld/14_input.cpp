#include<iostream>

using namespace std;
/*
数据的输入：从键盘获取数据
cin >>
*/

int main14() {

	//整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量 a = " << a << endl;

	//浮点型
	float b = 3.14f;
	cout << "请给浮点数变量b赋值：" << endl;
	cin >> b;
	cout << "浮点数 b = " << b << endl;

	//字符型
	char c = 'a';
	cout << "请给字符型变量c赋值：" << endl;
	cin >> c;
	cout << "字符型 c = " << c << endl;

	//字符串型
	char d[] = "assd";
	cout << "请给字符串型变量d赋值：" << endl;
	cin >> d;
	cout << "字符串型 d = " << d << endl;

	//布尔型
	bool e = true;
	cout << "请给布尔型变量e赋值：" << endl;
	cin >> e; //bool 非0都是真
	cout << "布尔型 e = " << e << endl;


	system("pause");
	return 0;
}