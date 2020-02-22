// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }


// 규칙 1. T&&로 인자를 받는다.
//     2. 원본에 보낼때 forward<T>(arg)로 묶어서 인자를 보낸다.

template<typename F, typename T> void logTime(F f, T&& arg)
{
	f(forward<T>(arg));
}


int main()
{
	int n = 10;
	logTime(goo, n);
}












