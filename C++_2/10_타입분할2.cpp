// 10_타입분할
#include <iostream>
#include <type_traits>
using namespace std;


// 1. template 을 사용해서 구조체를 만든다.
// 2. typedef T type; 을 넣는다.

// 3. 부분 전문화를 통해서 T 타입의 복합 속성에서 원하는 타입이 나오도록 분리한다.

template<typename T> struct xremove_pointer
{
	typedef T type;
};

template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};


template<typename T> void foo(T a)
{
	typename xremove_pointer<T>::type n;  //xremove_pointer<int*>::type n;  //

	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 0;
	foo(&n);
}




