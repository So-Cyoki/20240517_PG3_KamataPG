#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	//円をインスタンスする
	Circle* circle = new Circle(10, 10);
	circle->Draw();

	//矩形をインスタンスする
	Rectangle* rectangle = new Rectangle(10, 10);
	rectangle->Draw();

	return 0;
}