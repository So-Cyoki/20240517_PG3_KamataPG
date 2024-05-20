#pragma once
#include <stdio.h>

enum class EnemyPhase
{
	Coming,			//接近
	Shoot,			//射撃
	RunAway,		//離脱
	MAXNUM			//限界をチェックするために、参照しないでください
};
EnemyPhase& operator++(EnemyPhase& myself);//符号++のオーバーロード関数

class Enemy
{
public:
	EnemyPhase _enemyPhase;//状態のインデックス

	Enemy();
	~Enemy();
	void Update();

private:
	void(Enemy::* pStatus)();					//ステータスのメンバーポインタ関数
	static void(Enemy::* spStatucTable[])();	//状態のテーブル
	void FunComing();							//接近関数
	void FunShoot();							//射撃関数
	void FunRunAway();							//離脱関数
};

