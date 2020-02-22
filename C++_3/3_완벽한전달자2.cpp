// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }


// 해결책 
// 규칙 1. 래퍼 함수가 인자를 받을때는 참조이어야 한다.
// 규칙 2. 래퍼 함수를 lvalue 참조, rvalue 참조의 2개 함수 제공.
//		   ( const 버전도 필요하다.)
// 규칙 3.
template<typename F> void logTime(F f, int& arg)
{
	f(arg);
}
template<typename F> void logTime(F f, int&& arg)
{
	f(arg);
}
int main()
{
	int n = 10;

	logTime(foo, 0); //foo(0);
	logTime(goo, n); //goo(n);

	cout << n << endl; // 20
}





