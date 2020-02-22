// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }

template<typename T> struct identity
{
	typedef T type;
};

//template<typename T> T&& xforward(T& arg)
template<typename T> T&& xforward(typename identity<T>::type& arg)
{
	return static_cast<T&&>(arg);
}
template<typename F, typename T> void logTime(F f, T&& arg)
{
	// n은 lvalue, T : int&, T&& : int&
	// arg : int&
	//f(xforward(arg));  // 이순간 xforward()의 T는 무슨타입일까요 ?
					   // T는 int, static_cast<T&&>(arg)는 결국
					   //          static_cast<int&&>(arg)

	// 해결책 : xforward에서 T의 타입을 사용자가 지정한다
	f(xforward<T>(arg));// 이순간 xforward()의 T는 무슨타입일까요 ?
						// T는 int&, static_cast<T&&>(arg)는 결국
						//          static_cast<int& &&>(arg)
}


int main()
{
	int n = 10;
	logTime(goo, n);
}












