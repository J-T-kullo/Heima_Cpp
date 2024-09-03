#include<iostream>

using namespace std;
/*
进行运算
1. 算术运算符：用于处理四则运算
	+
	-
	*
	/
	%
	++
	--
2. 赋值运算符：用于将表达式的值赋给变量
	=
	+=
	-=
	*=
	/=
	%=
3. 比较运算符：用于表达式的比较，并返回一个真值或数值
	==
	!=
	<
	>
	<=
	>=
4. 逻辑运算符：用于根据表达式的值返回真值或假值
	!
	&&
	||
*/
int main15() {
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整数相除，结果还是整数，将小数部分去除
							 //两个数相除，除数不能为0
							 //两个小数可以相除

	//取模（取余） %
	cout << a1 % b1 << endl; //取模除数不能为0
							 //两个小数不能取模

	//（前/后置）递增 ++
	//（前/后置）递减 --
	//1. 前置递增
	int a = 10;
	cout << "a = " << ++a << endl; //让变量+1
	//2. 后置递增
	cout << "a = " << a++ << endl; 
	//3. 前后置的区别
	//前置：先计算+1再表达式运算
	//后置：先表达式运算再计算+1
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//赋值运算
	int aa = 10;
	cout << "aa = " << aa << endl;
	//=
	aa = 100;
	cout << "aa = " << aa << endl;
	aa = 10;
	//+=
	aa += 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	//-=
	aa -= 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	//*=
	aa *= 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	///=
	aa /= 2;
	cout << "aa = " << aa << endl;
	aa = 10;
	//%=
	aa %= 3;
	cout << "aa = " << aa << endl;
	aa = 10;

	//比较运算
	int bb1 = 10;
	int bb2 = 20;
	// ==
	cout << (bb1 == bb2) << endl;
	// !=
	cout << (bb1 != bb2) << endl;
	// <
	cout << (bb1 < bb2) << endl;
	// >
	cout << (bb1 > bb2) << endl;
	// <=
	cout << (bb1 <= bb2) << endl;
	// >=
	cout << (bb1 >= bb2) << endl;

	//逻辑运算
	bool cc1 = true;
	bool cc2 = false;
	// !
	cout << (!cc1) << endl;
	// &&
	cout << (cc1&&cc2) << endl;
	// ||
	cout << (cc1||cc2) << endl;

	system("pause");
	return 0;
}