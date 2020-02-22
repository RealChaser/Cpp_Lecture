#include <iostream>
using namespace std;

// 핵심 2 :

template<typename T, typename ... Types> 
class xtuple : public xtuple<Types...>  // xtuple<double, char>
{
	typedef xtuple<Types...> baseType;
public:
	T value;

	xtuple() {}
	xtuple(const T& a, const Types& ... args)
		: value(a), baseType(args...) {}

	static constexpr int N = baseType::N + 1;
};


// xtuple이 요소를 하나 가질때를 위한 부분 전문화
template<typename T> class xtuple<T>     // 부모가 필요 없다.
{
public:
	T value;
	xtuple() {}
	xtuple(const T& a) : value(a) {}
	static constexpr int N = 1;
};

int main()
{
	xtuple<int, double, char> t3(1, 2.3, 'A');

	xtuple<int> t1(1);
}

