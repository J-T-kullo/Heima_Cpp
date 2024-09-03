#include<iostream>
using namespace std;
/*
单精度：float 4字节 7有效数字
双精度：double 8字节 15-16有效数字
默认情况下，输出的小数，会显示6位有效数字
科学计数法：float f2 = 3e2;//3*10^2
*/


int main9() {

	float f1 = 3.14f;
	double d1 = 3.14;

	cout << "f1=" << f1 << endl;
	cout << "f1占用字节：" << sizeof(f1) << endl;

	cout << "d1=" << d1 << endl;
	cout << "d1占用字节：" << sizeof(d1) << endl;

	float f2 = 3e2; //3*10^2

	cout << "f2=" << f2 << endl;

	float f3 = 3e-2f; //3*10^(-2)

	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}