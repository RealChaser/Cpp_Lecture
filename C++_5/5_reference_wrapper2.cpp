// 5_reference_wrapper2
// 5_reference_wrapper - 145 page
#include <iostream>
#include <functional>
using namespace std;

void goo(int& r) { r = 30; }

// 값을 보관(전달)하는 방식으로 완벽한 전달자 구현하기
// C++98부터문법으로 구현 가능한 기술 - C++11의 공식 라이브러리

template<typename F, typename T> void Caller(F f, T arg)
{
	f(arg);
}

int main()
{
	int n = 10;
	//Caller(goo, n);
	Caller(goo, &n); // T는 int*로 결정.

	cout << n << endl; // 30
}







