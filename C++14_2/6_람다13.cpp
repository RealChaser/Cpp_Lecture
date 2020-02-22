#include <iostream>
using namespace std;

//void foo(auto a) {} // error. 함수 인자로 auto를 사용할수 없다.

int main()
{
	auto f1 = [](int a) {};
	auto f2 = []() {}; 
	auto f3 = [] {}; // Nullary lambda
					// 인자가 없으면 () 생략 가능.


	// C++14
	// 람다 인자는 auto 가능 => Closure의 ()연산자가 template 으로..
	auto f4 = [](auto a, auto b) { return a + b; };

	cout << f4(1, 2) << endl;
	cout << f4(1.4, 2.3) << endl;
	cout << f4(1.4, 2) << endl;
}
/*
class ClosureType 
{
public:
	template<typename T, typename U>
	inline auto operator()(T a, U b) const-> decltype(a + b)
	{
		return a + b;
	}
};
*/