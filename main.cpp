#include <iostream>
#include <string>
#include "Animals.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	//Animalsクラスによって、Dogクラスを生成する
	const char* name = "Dog";
	Animals* animals_Dog = new Dog(name);
	animals_Dog->Run();
	animals_Dog->Aoar();
	animals_Dog->Eat();

	//Animalsクラスによって、Catクラスを生成する
	name = "Cat";
	Animals* animals_Cat = new Cat(name);
	animals_Cat->Run();
	animals_Cat->Aoar();
	animals_Cat->Eat();

	delete animals_Dog;
	delete animals_Cat;
	return 0;
}