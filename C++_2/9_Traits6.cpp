// 9_Traits4
#include <iostream>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };


// 함수 오버로딩에 의한 함수 dispatch

template<typename T> void printv_imp(T value, YES )
{
	cout << value << " : " << *value << endl;
}

template<typename T> void printv_imp(T value, NO)
{
	cout << value << endl;
}

template<typename T> void printv(T value)
{
	// 함수 오버로딩에 의한 함수 선택은 컴파일 시간에 이루어 집니다.
	// 선택되지 않은 함수 템플릿은 인스턴스화 되지 않습니다.
	printv_imp( value, IsPointer<T>::value )
}




int main()
{
	int n = 3;

	printv(n);
}






