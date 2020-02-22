// 9_Traits3
#include <iostream>
#include <type_traits> // C++ 11 표준 Traits 메타 함수들.. 100여개 있습니다
using namespace std;




int a;    // a의 타입 int

int* p;   // int*

int x[10];// 변수이름 : x  타입 : int [10]   => T[N]



template<typename T> struct IsArray
{
	static constexpr int  size = -1;
	static constexpr bool value = false; 
};

template<typename T, int N> struct IsArray< T[N] >
{
	static constexpr int  size = N;
	static constexpr bool value = true;
};

template<typename T> void foo(const T& a)
{
	if (IsArray<T>::value)
		//cout << "배열입니다. 크기는 " << IsArray<T>::size << endl;
		cout << extent<T, 0>::value << endl; // C++11 표준
	else
		cout << "배열이 아닙니다." << endl;
}
int main()
{
	int x[5] = { 0 };

	foo(x); // IsArray 만들어 보세요.. IsPointer<> 참고하세요.
}




