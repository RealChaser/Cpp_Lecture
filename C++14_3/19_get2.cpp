#include <iostream>
using namespace std;

template<typename T, typename ... Types>
class xtuple : public xtuple<Types...>
{
	typedef xtuple<Types...> baseType;
public:
	T value;
	xtuple() {}
	xtuple(const T& a, const Types& ... args) : value(a), baseType(args...) {}

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

// tuple의 N번째 요소 타입을 구하는 방법
template<int N, typename T> struct xtuple_element;
//{
//	typedef T type;
//};

// 부분 전문화를 통한 타입의 분할.
// 1. 0번재 타입 부터 구한다.
template<typename T, typename ... Types>
struct xtuple_element<0, xtuple<T, Types...>>
{
	typedef T type;
	typedef xtuple<T, Types...> tupleType;
};

template<int N, typename T, typename ... Types> 
struct xtuple_element<N, xtuple<T, Types...>>
{
	typedef typename xtuple_element<N-1, xtuple<Types...>>::type type;
	typedef typename xtuple_element<N-1, xtuple<Types...>>::tupleType tupleType;
};


//xtuple_element<1, xtuple<int, char, long>>::type n; // int 나와야 합니다.

template<int N, typename T>  // T 는 튜플입니다.
typename xtuple_element<N, T>::type&
xget(T& tp)
{
	return ((typename xtuple_element<N, T>::tupleType&)tp).value;
}

int main()
{

	xtuple<int, double, char> t(3, 3.4, 'c');

	double d = xget<1>(t);
	cout << d << endl;
}

