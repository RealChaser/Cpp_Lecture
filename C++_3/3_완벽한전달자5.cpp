// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }


// 인자의 완벽한 전달을 하려면

// 1. 인자를 T&& 로 받아야 한다.(Forwarding Reference)
// 2. 원본함수로 보낼때는 인자를 캐스팅 한다.
//    원본함수(static_cast<T&&>(arg))

template<typename F, typename T> void logTime(F f, T&& arg)
{
	// 아래 함수는 logTime()의 2번째 인자가
	// lvalue라면 lvalue 캐스팅
	// rvalue라면 rvalue 캐스팅(rvalue 보냈지만 arg가 lvalue로 변경되어서
	//							다시 rvalue로 캐스팅한다는 의미)

	f(static_cast<T&&>(arg));
}

int main()
{
	int n = 10;
	logTime(goo, n); 
	logTime(foo, 0); 
}











