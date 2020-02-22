// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }

void hoo(int&& a) { cout << "foo" << endl; }



// 해결책 
// 규칙 1. 래퍼 함수가 인자를 받을때는 참조이어야 한다.

// 규칙 2. 래퍼 함수를 lvalue 참조, rvalue 참조의 2개 함수 제공.
//		   ( const 버전도 필요하다.)

// 규칙 3. rvalue reference (int&&) 버전에서는 원본 함수에 인자를 보낼때
//		   rvalue로 캐스팅해서 전달한다(static_cast<int&&>(arg))

template<typename F> void logTime(F f, int& arg)
{
	f(arg);

	//f(static_cast<int&>(arg)); // 캐스팅이 필요없지만 해도 상관없다.
								// 동일 타입이므로 무시된다.
}

template<typename F> void logTime(F f, int&& arg)
{
	//f(arg); // int&& arg = 10 에서 10은 rvalue 이지만 arg는 lvalue이다.
			// hoo( int& ) 함수를 찾게 된다.!

	f(static_cast<int&&>(arg)); // arg를 다시 rvalue로 변경해서 호출.
}


int main()
{
	hoo(10); // ok.. 아무 문제 없다.!!

	logTime(hoo, 10); // int&& arg = 10
}





