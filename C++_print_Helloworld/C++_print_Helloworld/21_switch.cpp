#include<iostream>
using namespace std;
/*
作用：执行多条件分支语句
switch(表达式)
{
	case 结果1：执行语句；break；
	case 结果2：执行语句；break；
	...
	default：执行语句；break；

}
*/
int main() {
	//switch语句
	//给电影打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5以下 

	int score = 0;
	cout << "please input the score:" << endl;
	cin >> score;
	cout << "your score is:" << score << endl;

	switch(score) {
	case 10:
		cout << "经典" << endl;
		break;
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
		cout << "一般" << endl;
		break;
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂！" << endl;
		break;

	}



	system("pause");
	return 0;
}