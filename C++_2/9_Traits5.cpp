// 9_Traits4
#include <iostream>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };

// 포인터인 경우에 처리할 함수.

template<typename T> void printv_pointer(T value)
{
	cout << value << " : " << *value << endl;
}

template<typename T> void printv_not_pointer(T value)
{
	cout << value << endl;
}

template<typename T> void printv(T value)
{
	// if 문은 실행시간 제어문 입니다.
	// if ( false ) 로 결정되어도 컴파일 시에는 
	//	if 의 모든 제어구간이 실행될수 있다고 가정하고
	//  모든 함수 템플릿을 인스턴스화 합니다.
	if (IsPointer<T>::value)
		printv_pointer(value);
	else
		printv_not_pointer(value);
}

int main()
{
	int n = 3;

	printv(n);  
}






