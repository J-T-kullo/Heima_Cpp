#include<iostream>;
using namespace std;

/*
do while:
	do {循环语句} while (循环条件);
	与while的区别：do...while会先执行一次循环语句，再判断条件；
*/
int main24() {

	//在屏幕中输出0~9
	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	system("pause");
	return 0;
}