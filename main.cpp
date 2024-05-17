#include <stdio.h>
#include <list>
using namespace std;


int main()
{
	//山手線の駅名前というListを宣言する
	list<const char*> yamanoteLineName;

	//最初の駅名前を入れる
	yamanoteLineName.push_back("Tokyo");
	yamanoteLineName.push_back("Kanda");
	yamanoteLineName.push_back("Akihabara");
	yamanoteLineName.push_back("Okachimachi");
	yamanoteLineName.push_back("Ueno");
	yamanoteLineName.push_back("Uguisudani");
	yamanoteLineName.push_back("Nippori");
	yamanoteLineName.push_back("Tabata");
	yamanoteLineName.push_back("Komagoe");
	yamanoteLineName.push_back("Sugamo");
	yamanoteLineName.push_back("Otsuka");
	yamanoteLineName.push_back("Ikebukuro");
	yamanoteLineName.push_back("Mejiro");
	yamanoteLineName.push_back("Takadanobaba");
	yamanoteLineName.push_back("Shin-Okubo");
	yamanoteLineName.push_back("Shinjuku");
	yamanoteLineName.push_back("Yoyogi");
	yamanoteLineName.push_back("Harajuku");
	yamanoteLineName.push_back("Shibuya");
	yamanoteLineName.push_back("Ebisu");
	yamanoteLineName.push_back("Meguro");
	yamanoteLineName.push_back("Gotanda");
	yamanoteLineName.push_back("Osaki");
	yamanoteLineName.push_back("Shinagawa");
	yamanoteLineName.push_back("Tamachi");
	yamanoteLineName.push_back("Hamamatsucho");
	yamanoteLineName.push_back("Shimbashi");
	yamanoteLineName.push_back("Yurakucho");

	//1970年の駅名前を出力する
	printf("-----------1970年の駅の名前-----------\n");
	for (auto itr = yamanoteLineName.begin(); itr != yamanoteLineName.end(); itr++) {
		//List中の要素をfor文で走査して、名前を出力する
		printf("%s\n", *itr);
	}
	printf("\n\n");



	//List中の欲しい位置に要素を書き入れる
	for (auto itr = yamanoteLineName.begin(); itr != yamanoteLineName.end(); itr++) {
		//もし位置の名前を探したら、ポインタを保存して、新たな要素を書き入れる
		if (*itr == "Tabata") {
			itr = yamanoteLineName.insert(itr, "Nishi-Nippori      <----1971年開業");
			itr++;//itr足すのを忘れないで。今のitrは書き入れたばかりの要素なので、足して次のitrへ行く
		}
	}
	//2019年の駅名前を出力する
	printf("-----------2019年の駅の名前-----------\n");
	for (auto itr = yamanoteLineName.begin(); itr != yamanoteLineName.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");


	//2022年も同じ操作する。新たな駅をListに書き入れて、全部の名前を出力する
	for (auto itr = yamanoteLineName.begin(); itr != yamanoteLineName.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = yamanoteLineName.insert(itr, "Takanawa Gateway   <----2020年開業");
			itr++;
		}
	}
	//2022年の駅名前を出力する
	printf("-----------2022年の駅の名前-----------\n");
	for (auto itr = yamanoteLineName.begin(); itr != yamanoteLineName.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");

	return 0;
}