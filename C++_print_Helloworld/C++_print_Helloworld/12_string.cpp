#include<iostream>
#include<string> // ��C++�����ַ���ʱ��Ҫ�����ͷ�ļ�
using namespace std;

/*
�ַ����ͣ����ڱ�ʾһ���ַ�
���ַ��
1. C�� char ������[] = "�ַ���ֵ"
2. C++�� string ������= "�ַ���ֵ"
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