#include <iostream>
using namespace std;

// T에서 변형된(내포된)타입 구하기

// 1. 사용하는 코드를 보고 primary template 설계 - 대부분 구조체로 설계
template<typename T> struct xremove_pointer
{
	typedef T type;
};

// 2. 부분전문화 문법으로 타입의 분할을 시도한다.
template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};

xremove_pointer<int*>::type n;


template<typename T> void foo(T a)
{
	typename xremove_pointer<T>::type n;

	cout << typeid(n).name() << endl; // int
}

int main()
{
	int n = 10;

	foo(&n);
}


