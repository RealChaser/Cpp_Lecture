#include <iostream>
using namespace std;

// 핵심 1 : 1번째 인자는 반드시 독립된 타입으로 해야 한다.

template<typename T, typename ... Types> class xtuple
{
public:
	T value;

	xtuple() {}
	xtuple(const T& a) : value(a) {}

	static constexpr int N = 1;
};

int main()
{
	xtuple<int, double, char> t3;
}





