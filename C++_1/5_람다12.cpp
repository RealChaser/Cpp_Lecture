// 5_람다11
// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

int main()
{
	auto f1 = [](int a) { return 0;};
	auto f2 = []() { return 0;};
	auto f3 = [] { return 0;}; // 인자가 없으면 0 생략 가능. nullary lambda


	/*
	// C++은 아래 처럼 사용할수 없지만 Swift 언어는 아래 처럼 사용할수 있습니다.
	sort(x, x + 10, [](int a, int b) { return a < b;});
	sort(x, x + 10, [] { return a < b;});

	sort(x, x + 10){ return a < b;};
	*/
}













