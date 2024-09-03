#include<iostream>

using namespace std;
/*
布尔类型
true——真（1）
false——假（0）
占用1个字节
*/

int main13() {
	//1. 创建bool数据类型
	bool flag1 = true;
	cout << flag1 << endl;

	bool flag2 = false;
	cout << flag2 << endl;

	//2.查看所占空间大小

	cout << sizeof(bool) << endl;
	return 0;
}