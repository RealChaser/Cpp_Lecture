#include <iostream>
using namespace std;

//void foo(auto a) {} // error. �Լ� ���ڷ� auto�� ����Ҽ� ����.

int main()
{
	auto f1 = [](int a) {};
	auto f2 = []() {}; 
	auto f3 = [] {}; // Nullary lambda
					// ���ڰ� ������ () ���� ����.


	// C++14
	// ���� ���ڴ� auto ���� => Closure�� ()�����ڰ� template ����..
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