#pragma once
#include "Animals.h"
class Cat :
	public Animals
{
public:
	Cat(const char* name) :Animals(name) {};
	//吠える関数をoverrideする
	void Aoar()override { std::cout << name << "はニャーニャー！って吠えます。" << std::endl; };
};

