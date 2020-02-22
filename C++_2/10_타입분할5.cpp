// 10_타입분할
#include <iostream>
#include <type_traits>
using namespace std;


template<typename T> struct xremove_pointer
{
	typedef T type;
};
template<typename T> struct xremove_pointer<T*>
{
	//typedef T type;
	// 재귀를 잘 알아야 합니다. - 핵심!!!
	typedef typename xremove_pointer<T>::type type;
};

int main()
{
	xremove_pointer<int***>::type n;  // T가 아니므로 typename을 사용하면 안됨.

	cout << typeid(n).name() << endl;
}




