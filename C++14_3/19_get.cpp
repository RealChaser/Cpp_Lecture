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


template<int N, typename T>  // T 는 튜플입니다.
리턴타입(T가 가진 N요소의 타입&)
xget(T& tp)
{
	return ((TP의 N번째 부모의타입&)tp).value;
}

int main()
{
	//                  xtuple<char>      // 'c'
	//          xtuple<double, char>      // 3.4
	xtuple<int, double, char> t(3, 3.4, 'c'); // 3보관
	 
	cout << t.value << endl; // 3
	cout << ((xtuple<double, char>&)t).value << endl; // 3.4

	
	double d = xget<1>(t); // t의 1번째 값 꺼내기
	cout << d << endl; // 3.4
}






// cafe.naver.com/cppmaster 에서

// 19_get.cpp 소스 다시 받아 보세요...
