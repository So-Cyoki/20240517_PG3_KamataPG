#pragma once
#include "IShape.h"
class Circle :
	public IShape
{
public:
	//初期化
	Circle(float length, float width) :IShape(length, width) {};
	//面積を計算する関数をoverride
	float Size()override { return length * length * acosf(-1); };
	//面積の値を出力する関数をoverride
	void Draw()override { std::cout << "円の面積は：" << Size() << std::endl; };
};