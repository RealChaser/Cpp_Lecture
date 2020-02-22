#include <iostream>
//#include <boost\\type_index.hpp>
using namespace std;
//using namespace boost;
//using namespace boost::typeindex;

// 규칙 2. 인자의 타입이 참조 타입이면 함수 인자가 가지고 있는 참조 속성만 제거된다. (const, volatile은 유지한다.)
template<typename T> void foo(T& a)
{
	// C++ 표준 RTTI를 사용해서 타입 구하기.
	// const 와 volatile 와 참조를 출력 못함.,
	// cout << typeid(T).name() << ", a : " << typeid(a).name() << endl;

	// boost를 사용해서 결과 출력
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

template<typename T> void goo(const T& a)
{}

int main()
{
	int n = 10;
	int&r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T : int   a : int&
	foo(r); // T : int   a : int&
	foo(c); // T : const int  a : const int&
	foo(cr);// T : const int  a : const int&

	goo(n); // T : int   a : const int&
	goo(r); // T : int   a : const int&
	goo(c); // T : int   a : const int&
	goo(cr);// T : int   a : const int&
}





