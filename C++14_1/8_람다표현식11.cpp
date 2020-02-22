#include <iostream>
using namespace std;

int main()
{
	// nullary lambda
	auto f1 = [](int a) {return a * a; }; // 인자가 한개인경우
	auto f2 = []() {return 3; }; // 인자가 0개인경우
	auto f2 = []{return 3; }; // 인자가 0개인경우

	// 숙제. 람다인자는 auto가능 - 원리가 무엇일지 조사해 보세요..
	auto f4 = [](auto a, auto b) { return a + b; };

	cout << f4(1, 2.5) << endl;
}


//void foo(auto a) {} // error. 함수 인자로 auto 안됨.
