#include<iostream>
#include<string> // 用C++风格的字符串时，要引入该头文件
using namespace std;

/*
字符串型：用于表示一串字符
两种风格：
1. C： char 变量名[] = "字符串值"
2. C++： string 变量名= "字符串值"
*/

int main12() {

	//C
	char str[] = "hello world";
	cout << str << endl;

	//C++ #include<string> 
 	string str2 = "hello world!";
	cout << str2 << endl;


	system("pause");
	return 0;
}