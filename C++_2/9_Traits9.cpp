#include <iostream>
using namespace std;

// 1. 헤더 포함
#include <type_traits>

template<typename T> void foo_imp(T a, true_type)
{
	*a = 0;
	cout << "pointer" << endl;
}
template<typename T> void foo_imp(T a, false_type)
{
	cout << "not pointer" << endl;
}

template<typename T> void foo(T a)
{
	// 조사 방법 1. value 꺼내기
	// 단점 : a가 포인터 라도 *a 라는 표현식을 사용할수 없다.
	if ( is_pointer<T>::value )
		cout << "포인터" << endl;  
	else
		cout << "포인터 아님" << endl;


	// 조사 방법 2. 함수 오버로딩  : *a표현 사용가능
	foo_imp(a, is_pointer<T>() );
}

int main()
{
	int n = 0;
	foo(&n);
}

