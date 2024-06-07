#pragma once
#include <cmath>
#include <iostream>
class IShape		//抽象の基底クラス
{
public:
	float length;	//長さ
	float width;	//広さ

	//初期化
	IShape(float length, float width) :length(length), width(width) {};
	//面積を計算する(純粋仮想関数)
	virtual float Size() = 0;
	//面積の値を出力する(純粋仮想関数)
	virtual void Draw() = 0;
};

