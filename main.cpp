#include <stdio.h>
#include <Windows.h>
#include "Enemy.h"

bool StopWatch(int second);//ストップウォッチ

int main()
{
	//敵をインスタンスする
	Enemy* enemyObj = new Enemy();

	//ゲームのメインループ
	while (true)
	{
		enemyObj->Update();
		//3秒後、敵の状態を遷移していく(もし最後の状態になったら、もう一度最初の状態に戻る)
		if (StopWatch(3)) {
			++enemyObj->_enemyPhase;//次の状態へ行く
		}
	}

	//ゲームが終わったら、全てのObjを消す
	delete enemyObj;
	return 0;
}

bool StopWatch(int second)
{
	for (int i = second; i >= 1; i--) {
		printf("( %d秒 )\n", i);
		Sleep(1000);
	}
	return true;
}
