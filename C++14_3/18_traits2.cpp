#include <iostream>
using namespace std;

int f1(double a, char c, short s) { return 0; }

// 함수의 리턴 타입 구하기.
// 1. 사용자 코드를 생각해서 primary template 만들기
template<typename T> struct result_type
{
	typedef T type;
};
/*
template<typename A, typename B, typename C, typename D> 
struct result_type<A(B,C,D)>
{
	typedef A type;
};
*/


template<typename A, typename ... Types>
struct result_type<A(Types...)>
{
typedef A type;
};

// primary template
template<int N, typename T> struct argument_type
{
	typedef T type;
};

// 아래 처럼 부분 전문화 하면 안된다. - N번째를 구할수는 없다.
/*
template<int N, typename R, typename A, typename ... Types> 
struct argument_type<N, R(A, Types...)>
{
	typedef T type;
};
*/

// 0번째 인자 타입 구하기.
template<typename R, typename A, typename ... Types>
struct argument_type<0, R(A, Types...)>
{
	typedef A type;
};

// N번재 구하기..  N을 1줄이고 1번째 인자를 제거하고 다시 재귀..
// N이 0이 뒤면 위의 부분 전문화 사용..
template<int N, typename R, typename A, typename ... Types>
struct argument_type<N, R(A, Types...)>
{
	typedef typename argument_type<N-1, R(Types...)>::type type;
};


template<typename T> void foo(T& a) // int(double, char, short)
{
	// 함수의 리턴 타입 구하기.
//	typename result_type<T>::type ret;
//	cout << typeid(ret).name() << endl;

	// 1번째 인자 타입 구하기
	typename argument_type<2, T>::type b;
	cout << typeid(b).name() << endl;
}

int main()
{
	foo(f1);
}