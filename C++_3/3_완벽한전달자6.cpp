// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }


// static_cast<T&&>(arg) 의 일을 하는 함수

// T&  : lvalue reference => lvalue 만 전달 가능
// T&& : forwarding refernce => lvalue, rvalue 모두 가능.

template<typename T> T&& xforward(T& arg)
{
	return static_cast<T&&>(arg);
}

template<typename F, typename T> void logTime(F f, T&& arg)
{
//	f(static_cast<T&&>(arg));
	f(xforward(arg)); // arg는 어떤 경우라도 lvalue이다.
					  // xforward의 인자는 T& 이면 충분한다.
					  // 그런데 logTime(goo, n) 일때 에러 발생..
}


int main()
{
	int n = 10;
	logTime(goo, n); 
//	logTime(foo, 0); 
}












