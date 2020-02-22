// 10_타입분할
#include <iostream>
#include <type_traits>
using namespace std;

// traits 종류
// 1. T의 속성 질의
// 2. T의 변형된(연관된) 타입 얻기

template<typename T> void foo(T a)
{
	// is_pointer<T>::value

	// T에서 포인터를 제거한 타입얻기
	typename remove_pointer<T>::type n;

	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 0;
	foo(&n);
}




