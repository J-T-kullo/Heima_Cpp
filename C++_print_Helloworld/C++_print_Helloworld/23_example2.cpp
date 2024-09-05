#include<iostream>
using namespace std;
#include<ctime>

int main23() {

	//猜数字
	//系统生成随机数,添加随机数种子，可以利用系统时间生成的随机数
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //rand()%100 生成0~99随机数
	cout << num << endl;
	//玩家进行参数
	int val = 0;

	while (1) {

		cin >> val;
		//判断玩家的猜测

		
		//猜错了，提示猜的结果大/小，重新猜
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		else if (val < num) {
			cout << "猜测过小" << endl;
		}
		//猜对  退出游戏
		else {
			cout << "猜对了！游戏退出。。。" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}