#include <iostream>
#include <thread>

void PrintNum(int num) {
	std::cout << "thread" << num << std::endl;//メッセージを出力
}

int main()
{
	std::thread th1(PrintNum, 1);//スレッド1を作成
	th1.join();//スレッド1の動作完了前に待ち

	std::thread th2(PrintNum, 2);//スレッド2を作成
	th2.join();//スレッド2の動作完了前に待ち

	std::thread th3(PrintNum, 3);//スレッド3を作成
	th3.join();//スレッド3の動作完了前に待ち

	return 0;
}