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
	NumQuite<int, float> numQuite1(10, 9.9f);			//int型とfloat型
	NumQuite<int, double> numQuite2(2, 2.222);			//int型とdouble型
	NumQuite<float, double> numQuite3(3.4f, 5.678);		//float型とdouble型

	std::cout << "int型とfloat型と比べると、小さい値は：" << numQuite1.Min() << std::endl;
	std::cout << "int型とdouble型と比べると、小さい値は：" << numQuite2.Min() << std::endl;
	std::cout << "float型とdouble型と比べると、小さい値は：" << numQuite3.Min() << std::endl;
	return 0;
}