// 10_타입분할
#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct ArrayBaseType
{
	typedef T type;
};

template<typename T, int N> struct ArrayBaseType<T[N]>
{
	typedef T type;
};


template<typename T> void foo(const T& a)
{
	typename ArrayBaseType<T>::type n;  // 만들어 보세요.

	cout << typeid(n).name() << endl; // int 나오게 해보세요..
}

int main()
{
	int x[5] = { 0 };
	foo(x);
}




