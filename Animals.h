#pragma once
#include <iostream>
class Animals
{
public:
	const char* name;//動物の名前

	//初期化
	Animals(const char* name) :name(name) {};
	//走る関数
	virtual void Run() { std::cout << name << "は走ります。" << std::endl; };
	//吠える関数
	virtual void Aoar() { std::cout << name << "は吠えます。" << std::endl; };
	//食べる関数
	virtual void Eat() { std::cout << name << "は食べます。" << std::endl; };
};

