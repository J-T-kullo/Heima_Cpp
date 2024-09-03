#include <iostream>
using namespace std;

int main8() {
	//integers£ºshort(2), int(4), long(4), long long(8)
	//can use "sizeof" to get the memory occupied by the data type
	//How: sizeof(data type/variant)

	short num1 = 10;
	cout << "short occupys " << sizeof(num1) << " memory." << endl;

	int num2 = 10;
	cout << "int occupys " << sizeof(num2) << " memory." << endl;

	long num3 = 10;
	cout << "long occupys " << sizeof(num3) << " memory." << endl;

	long long num4 = 10;
	cout << "long long occupys " << sizeof(num4) << " memory." << endl;

	system("pause");
	return 0;
}