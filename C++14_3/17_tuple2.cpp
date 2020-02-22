// 10_tuple
#include <iostream>
using namespace std;

// 핵심 : 첫번째 템플릿 인자는 반드시 독립된 타입이어야 한다.

// 한개 보관
/*
template<typename T, typename ... Types> class xtuple
{
public:
	T value;

	xtuple() {}
	xtuple(T& a) : value(a) {}

	constexpr int N = 1;
};
*/

template<typename T, typename ... Types> 
class xtuple : public xtuple<Types...>
{
	typedef xtuple<Types...> baseType;
public:
	T value;
	xtuple() {}
	xtuple(const T& a, const Types& ... args ) : value(a), baseType(args...) {}

	static constexpr int N = baseType::N + 1;
};

// 인자가 한개일 때를 위해서 부분 전문화
template<typename T> class xtuple<T>
{
public:
	T value;
	xtuple() {}
	xtuple(const T& a) : value(a) {}
	static constexpr int N = 1;
};

int main()
{
	xtuple<int, double, int> t3(1, 3.4, 3);

	xtuple<double, int> t;
}




// tuple : 서로 다른 타입 N개의 data를 저장하는 컨테이너