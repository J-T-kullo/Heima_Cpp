#include<iostream>
using namespace std;
/*
1.#define宏常量：#define 常量名 常量值
	通常在文件上方定义
2.const修饰的变量：const 数据类型 常量名 = 常量值
*/

#define Ae 9

int main4(){

	cout << "Ae=" << Ae << endl;

	const int day = 7;
	cout << "A week has " << day << " days" << endl;

	system("pause");
	return 0;
}