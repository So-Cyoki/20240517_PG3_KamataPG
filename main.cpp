#include <iostream>
#include <string>
#include "Dog.h"
#include "Cat.h"

int main()
{
	//Animalsクラスによって、Dogクラスを生成する
	const char* name = "Dog";
	Dog* dog = new Dog(name);
	dog->Run();
	dog->Aoar();
	dog->Eat();

	//Animalsクラスによって、Catクラスを生成する
	name = "Cat";
	Cat* cat = new Cat(name);
	cat->Run();
	cat->Aoar();
	cat->Eat();

	delete dog;
	delete cat;
	return 0;
}