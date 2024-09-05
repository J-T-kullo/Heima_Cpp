#include<iostream>
using namespace std;
	//案例描述：水仙花数
	//水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
	//例如：^3+5^3+3^3 = 153
	//请利用do...while语句,求出所有3位数中的水仙花数
/*
153
	获取个位：153%10 = 3
	获取十位：153/10 = 15 15%10 = 5
	获取百位：153/100 = 1 

*/
int main25() {
	//将所有的三位数进行输出（100-999）
	int num = 100;
	

	//在所有三位数中找到水仙花数
	do {
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = (num / 10) % 10;
		c = num / 100;

		if (a*a*a + b*b*b + c*c*c == num) {
			cout << num << endl;
		}

		num++;
	} while (num < 1000);


	system("pause");
	return 0;
}