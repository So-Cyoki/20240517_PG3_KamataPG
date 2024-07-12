#include <iostream>
#include <string>
#include <chrono>

//メモリ上にコピーでかかる時間
std::chrono::microseconds MemoryCopyTime(std::string& str) {
	auto startTime = std::chrono::high_resolution_clock::now();//開始時間
	std::string copy = str;//内容をコピーする
	auto endTime = std::chrono::high_resolution_clock::now();//終了時間
	std::chrono::microseconds time = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);//かかった時間を計算
	return time;
}

//メモリ上に移動でかかる時間
std::chrono::microseconds MemoryMoveTime(std::string&& str) {
	auto startTime = std::chrono::high_resolution_clock::now();//開始時間
	std::string move = std::move(str);//内容を移動する
	auto endTime = std::chrono::high_resolution_clock::now();//終了時間
	std::chrono::microseconds time = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);//かかった時間を計算
	return time;
}

int main()
{
	std::string a(10000000, 'a');//一千万個の'a'を含めてる文字列を作成した
	auto copyTime = MemoryCopyTime(a);//コピーでかかった時間
	auto moveTime = MemoryMoveTime(std::move(a));//移動でかかった時間

	std::cout << "10,000,000(一千万)文字を移動とコピーで比較しました。" << std::endl;
	std::cout << "コピー：" <<
		copyTime.count() << "μs" << std::endl;
	std::cout << "移動：" <<
		moveTime.count() << "μs" << std::endl;

	return 0;
}