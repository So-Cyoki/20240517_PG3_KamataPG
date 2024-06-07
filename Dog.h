#pragma once
#include "Animals.h"
class Dog :
	public Animals
{
public:
	Dog(const char* name) :Animals(name) {};
	//吠える関数をoverrideする
	void Aoar()override { std::cout << name << "はワンワン！って吠えます。" << std::endl; };
};

