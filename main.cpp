#include <iostream>

template <typename T1, typename T2>	//２つテンプレート
class NumQuite						//クラステンプレート
{
public:
	T1 num1;
	T2 num2;

	NumQuite(T1 num1, T2 num2) :num1(num1), num2(num2) {};	//初期化
	auto Min() {											//２つ値を比べて、小さい値を返す
		return (num1 < num2) ? num1 : num2;
	}
};

int main()
{
	NumQuite<int, int> numQuite1(10, 3);				//int型とint型
	NumQuite<int, float> numQuite2(10, 3.5f);			//int型とfloat型
	NumQuite<int, double> numQuite3(10, 3.567);			//int型とdouble型
	NumQuite<float, float> numQuite5(3.5f, 2.5f);		//float型とfloat型
	NumQuite<float, double> numQuite6(3.5f, 2.567);		//float型とdouble型
	NumQuite<double, double> numQuite4(3.567, 10.123);	//double型とdouble型

	std::cout << "int型とint型と比べると、小さい値は：" << numQuite1.Min() << std::endl;
	std::cout << "int型とfloat型と比べると、小さい値は：" << numQuite2.Min() << std::endl;
	std::cout << "int型とdouble型と比べると、小さい値は：" << numQuite3.Min() << std::endl;
	std::cout << "float型とfloat型と比べると、小さい値は：" << numQuite4.Min() << std::endl;
	std::cout << "float型とdouble型と比べると、小さい値は：" << numQuite5.Min() << std::endl;
	std::cout << "double型とdouble型と比べると、小さい値は：" << numQuite6.Min() << std::endl;
	return 0;
}