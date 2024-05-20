#include "Enemy.h"

Enemy::Enemy()
{
	pStatus = nullptr;
	_enemyPhase = EnemyPhase::Coming;//最初の状態インデックスは接近
}

Enemy::~Enemy()
{
	printf("Disable Enemy\n");
}

void Enemy::Update()
{
	//インデックスでステータスにテーブルの値を代入する
	pStatus = spStatucTable[static_cast<size_t>(_enemyPhase)];
	//ステータスのメンバーポインタを参照する
	(this->*pStatus)();
}

void (Enemy::* Enemy::spStatucTable[])() =
{
	&Enemy::FunComing,
	&Enemy::FunShoot,
	&Enemy::FunRunAway
};

void Enemy::FunComing()
{
	printf("敵が接近中...\n");
}

void Enemy::FunShoot()
{
	printf("敵が射撃中...\n");
}

void Enemy::FunRunAway()
{
	printf("敵が離脱中...\n");
}

EnemyPhase& operator++(EnemyPhase& myself)
{
	//自身に１を足す
	myself = static_cast<EnemyPhase>(static_cast<size_t>(myself) + 1);
	//もしインデックスは最大値の時、0番に戻る
	if (myself == EnemyPhase::MAXNUM) {
		myself = static_cast<EnemyPhase>(0);
	}
	return myself;
}
