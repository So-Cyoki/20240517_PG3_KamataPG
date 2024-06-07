#pragma once
#include "IShape.h"
class Rectangle :
	public IShape
{
public:
	//初期化
	Rectangle(float length, float width) :IShape(length, width) {};
	//面積を計算する関数をoverride
	float Size()override { return length * width; };
	//面積の値を出力する関数をoverride
	void Draw()override { std::cout << "矩形の面積は：" << Size() << std::endl; };
};

