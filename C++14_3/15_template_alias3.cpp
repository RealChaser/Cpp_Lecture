#include <iostream>
#include <type_traits>
using namespace std;

//template<typename T>
//using remove_pointer_t = typename remove_pointer<T>::type;


template<typename T> void foo(T a)
{
	// T에서 포인터를 제거한 타입의 변수 n을 선언해 보세요.. 정확히 해보세요

	//typename remove_pointer<T>::type n;
	remove_pointer_t<T> n;
}

int main()
{
	int n = 0;
	foo(&n);

	int n2 = 0b101;
	cout << n2 << endl; // 5

	int n3 = 1'000'000'000;
}

