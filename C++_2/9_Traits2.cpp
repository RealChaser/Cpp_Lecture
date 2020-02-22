#include <iostream>
using namespace std;

// Traits : 템플릿 인자 T의 다양한 속성을 조사하는 기술
//          메타 함수 - 컴파일 시간에 사용하는 함수

// 만드는 방법
// 1. 구조체 template 으로 설계 한다.

// 2. primary template에서 false 리턴( value = false 라는 의미)

// 3. 부분 전문화 true 리턴 ( value = true )



// T가 포인터인지 조사하는 기술
template<typename T> struct IsPointer
{
	//enum { value = false }; // C++98 style..
	static constexpr bool value = false; // C++11 style (교재 모양)
};

template<typename T> struct IsPointer<T*>
{
	//enum { value = true };
	static constexpr bool value = true;
};

template<typename T> void foo(T a)
{
	if ( IsPointer<T>::value )
		cout << "포인터" << endl;
	else
		cout << "포인터 아님" << endl;
}
int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}



