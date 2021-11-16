// kadai1102.cpp
#include <iostream>
using namespace std;
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* is_prime
*
* 与えられた正整数 xに対して素数かどうか判定する
*/
/* -------------------------------------------------------------- */
bool is_prime(unsigned int x) {
	//２からx-1までの数がxを割れるかチェックする
	//もし割れたら即falseを返す
	if (x < 2) return false;
	else if (x == 2) return true;
	else if (x % 2 == 0) return false; 

	double sqrtNum = sqrt(x);
	for (int i = 3; i <= sqrtNum; i += 2)
	{
		if (x % i == 0)
		{
			// 素数ではない
			return false;
		}
	}

	// 素数である
	return true;
}
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int num = a;
	int count = 0;//numが素数だったら1インクリメント（増加）する
	for (int i = 0; i < 100; i++) {
		std::cout << num << std::endl;
		num = num + d;
	};
	return 0;
}

int main() {
	std::cout << is_prime(2) << std::endl;
	std::cout << is_prime(3) << std::endl;
	std::cout << is_prime(4) << std::endl;
	//std::cout << nth_prime(367, 186, 151) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	cin.get();
	return 0;
}
