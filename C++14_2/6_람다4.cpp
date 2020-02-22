#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

//  람다와 0타입

int main()
{
	// 모든 람다 표현식은 다른 타입이다.
	// 람다로 초기화 한 auto 변수에 다른 람다를 담을수 없다.
	auto f1 = [](int a, int b) { return a + b;};
	auto f2 = [](int a, int b) { return a + b;};

	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;

	f1 = f2; // error. 다른 타입이다.

	f2 = [](int a, int b) { return a + b; }; // error

}




