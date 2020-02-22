// 9_Traits4
#include <iostream>
using namespace std;



template<int N> struct int2type  // 98 page
{
	enum { value = N };
};










/*
int main()
{
	foo(0);
	foo(1); // 0, 1은 같은 타입. foo(0), foo(1)은 같은 함수 호출.

	int2type<0> t0;
	int2type<1> t1;

	foo(t0);
	foo(t1); // t0, t1은 다른 타입. foo(t0), foo(t1)은 다른 함수 호출.
}
*/




template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };


// 함수 오버로딩에 의한 함수 dispatch
// www.google.com 에서 "C++ IDioms" 검색
// 첫번째 링크 가보세요..

template<typename T> void printv_imp(T value, int2type<1> )
{
	cout << value << " : " << *value << endl;
}

template<typename T> void printv_imp(T value, int2type<0> )
{
	cout << value << endl;
}


template<typename T> void printv(T value)
{

	printv_imp(value, int2type< IsPointer<T>::value >());
}







int main()
{
	int n = 3;

	printv(n);
}







