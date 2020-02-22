// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }

// 완벽한 전달자(perfect forwarding)

// 래퍼 함수를 만들때 원본 함수에게 인자를 완벽하게 전달하는 기술.

template<typename F, typename T> void logTime(F f, const T& arg)
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





