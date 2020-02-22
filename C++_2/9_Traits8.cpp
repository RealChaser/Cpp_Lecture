#include <iostream>
using namespace std;

// int2type이 발전되어서 C++11의 표준이 됩니다. - 99 page
/*
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;  // enum 대신 static constexpr
};

//integral_constant<int,   1> n1;
//integral_constant<int,   0> n0;
//integral_constant<short, 0> s0;

// true/false          : 참 거짓을 나타내는 값. 같은 타입
// true_type/fale_type : 참거짓을 나타내는 타입. 다른 타입
typedef integral_constant<bool, true>  true_type;
typedef integral_constant<bool, false> false_type;


// is_pointer 만들기
template<typename T> struct is_pointer     : false_type {  };
template<typename T> struct is_pointer<T*> : true_type {};
*/

#include <type_traits> // 이 안에 위의 모든 요소가 있습니다. - 99 page 참고

//----------------------------------------------
template<typename T> void printv_imp(T value, true_type )
{
	cout << value << " : " << *value << endl;
}
template<typename T> void printv_imp(T value, false_type )
{
	cout << value << endl;
}

template<typename T> void printv(T value)
{
	//printv_imp(value, int2type< IsPointer<T>::value >());

	printv_imp(value, is_pointer<T>() ); // !!
}

int main()
{
	int n = 3;

	printv(n);
}








