#include<iostream>
using namespace std;
/*
用于表示一些不能显示出来的ASCII码
*/
int main11() {
	//转义字符

	//换行符 \n

	cout << "hello world\n" << endl;;

	//反斜杠 \\

	cout << "\\" << endl;

	//水平制表符 \t (一共占据8个位置) 可以整齐的输出数据

	cout << "a\tbc" << endl;
	cout << "aaaa\tbc" << endl;
	cout << "add\tbc" << endl;

	system("pause");
	return 0;
}