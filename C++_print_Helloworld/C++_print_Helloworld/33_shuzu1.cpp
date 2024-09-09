#include<iostream>
using namespace std;
/*
数组：
	所谓数组，就是一个集合，里面存放了相同类型的数据元素
	1.每个元素都是相同的数据类型
	2.数据是由连续的内存位置组成的
*/
/*
一维数组：
	1.数据类型 数组名[数组长度];
	2.数据类型 数组名[数组长度] = {值1，值2 ... };
	3.数据类型 数组名[] = {值1，值2 ... };
*/
int main() {
	int a = 3;
	//数组
	//新建
	if (a==1) {
		int arr1[5];
		//赋值
		for (int i = 0; i < 5; i++) {
			arr1[i] = (i + 1) * 10;
		}
		//访问
		for (int i = 0; i < 5; i++) {
			cout << arr1[i] << endl;
		}
	}
	if (a == 2) {
		int arr2[5] = { 10,20,30,40,50 };
		//访问
		for (int i = 0; i < 5; i++) {
			cout << arr2[i] << endl;
		}
	}
	if (a == 3) {
		int arr3[] = { 10,20,30,40,50 };
		//访问
		for (int i = 0; i < 5; i++) {
			cout << arr3[i] << endl;
		}
	}

	


	system("pause");
	return 0;
}