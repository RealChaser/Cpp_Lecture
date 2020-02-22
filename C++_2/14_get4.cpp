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

// 규칙 1. 구조체 tempalte을 만들고 typedef를 넣는다.

template<int N, typename T> struct xtuple_element_type
{
	typedef T type;
};

// 2. N이 0일때만 먼저 생각하자.
//    아래 코드의 문제점.. T의 타입분할이 아직 안되어 있다.
/*
template<typename T> struct xtuple_element_type<0, T>
{
typedef T type;
};
*/

// 3. 부분 전문화를 통해서 T의 타입을 원하는 형태로 분할하자!!
// 핵심 : 0번째 요소 타입을 구하기 위해
// T => xtuple<T, Types...> 로 분할하는 부분 전문화 기술..!

template<typename T, typename ... Types>
struct xtuple_element_type<0, xtuple<T, Types...> >
{
	typedef T type;			// 0번째 요소 타입
	typedef xtuple<T, Types...> tupleType; // 0번째 저장하는 튜플 타입
};

// N != 0 일때..
template<int N, typename T, typename ... Types>
struct xtuple_element_type<N, xtuple<T, Types...> >
{
	typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::type  type;

	typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::tupleType  tupleType;

};
//-----------------------------
template<int N, typename T> 
typename xtuple_element_type<N,T>::type& 
xget(T& tp) 
{
	return ((typename xtuple_element_type<N, T>::tupleType&)tp).value;
}
//#include <tuple> // 이안에 모두 있습니다.
int main()
{
	xtuple<int, double, char> t3(1, 2.3, 'A');

	xget<1>(t3) = 5.5;

	cout << xget<1>(t3) << endl;

}







