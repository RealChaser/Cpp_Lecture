// 5_람다
#include <algorithm>
#include <iostream>
using namespace std;

//  3. 람다와 타입..
// 1. 모든 람다 표현식은 다른 타입이다.
// 2. 람다표현식으로 초기화된 auto 변수는 다른 람다를 가르킬수 없다.

int main()
{
	auto f1 = [](int a, int b) { return a + b;};
	auto f2 = [](int a, int b) { return a + b;};

	f2 = [](int a, int b) { return a + b;}; // 될까요 ?


	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;
}



