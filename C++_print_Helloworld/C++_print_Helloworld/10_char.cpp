#include<iostream>
using namespace std;

int main10() {

	//1. 字符型变量创建方式
	char ch = 'a';
	cout << "ch = " << ch << endl;

	//2. 字符型变量所占内存大小
	cout << "ch的内存：" << sizeof(ch) << endl;

	//3. 字符型变量常见错误
	//char ch2 = "b"; //创建时用单引号
	//char ch2 = 'ssdaf'; //创建时单引号内只有一个字符


	//4. 字符型变量对应ASCII编码
	//a - 97
	//A - 65
	cout <<"a的 ASCII 码：" << (int)ch << endl;


	system("pause");
	return 0;
}