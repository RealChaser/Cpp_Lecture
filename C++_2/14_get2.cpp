#include <iostream>
using namespace std;

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

template<typename T> class xtuple<T>
{
public:
	T value;
	xtuple() {}
	xtuple(const T& a) : value(a) {}
	static constexpr int N = 1;
};
//--------------------------------------------
// 결국 필요한것은 특정 튜플의 N번째 요소의 타입이 무엇인가 ?
//							       부모 타입이 무엇인가 ?
template<int N, typename T> N번째요소타입& xget(T& tp) // T는 튜플입니다.
{
	return ((N번째부모타입&)tp).value;
}

int main()
{
	xtuple<int, double, char> t3(1, 2.3, 'A'); 


	double d = xget<1>(t3); // t3의 2번째 요소값을 꺼내는 함수

}







