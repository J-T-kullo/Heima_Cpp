# include<iostream>
using namespace std;
/*
顺序结构：程序顺序执行，不发生跳转
选择结构：按照条件执行相应的功能
循环结构：按照条件是否满足，循环多次执行某段代码
*/
int main16() {
	//选择结构：按照条件执行相应的功能
	//if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出
	int score = 0;
	cout << "请输入一个分数: " << endl;
	cin >> score;
	cout << "您输入的分数为： " << score << endl;

	if (score > 600) {
		cout << "您考上了一本大学！" << endl;
	}
	else {
		cout << "您没考上一本，但是不要灰心~" << endl;
	}

	system("pause");
	return 0;
}