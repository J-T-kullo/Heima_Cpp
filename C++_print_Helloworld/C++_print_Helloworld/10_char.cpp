#include<iostream>
using namespace std;

int main10() {

	//1. �ַ��ͱ���������ʽ
	char ch = 'a';
	cout << "ch = " << ch << endl;

	//2. �ַ��ͱ�����ռ�ڴ��С
	cout << "ch���ڴ棺" << sizeof(ch) << endl;

	//3. �ַ��ͱ�����������
	//char ch2 = "b"; //����ʱ�õ�����
	//char ch2 = 'ssdaf'; //����ʱ��������ֻ��һ���ַ�


	//4. �ַ��ͱ�����ӦASCII����
	//a - 97
	//A - 65
	cout <<"a�� ASCII �룺" << (int)ch << endl;


	system("pause");
	return 0;
}