#include <iostream>
using namespace std;

// 규칙 1. 인자의 타입이 값 이면 함수 인자의 const, volatile, reference는  제거하고 타입이 결정된다
template<typename T> void foo(T a)
{}

int main()
{
	int n = 10;
	int&r = n;
	const int c = n;
	const int& cr = c;
	foo(n); // T  int
	foo(r); // T  int
	foo(c); // T  int
	foo(cr);// T  int

	const char* s = "hello";
	foo(s); // T : const char*

	const char* const s2 = "aaa";
	foo(s2); // T : const char*   -> 뒤에 const 는 타입에 대한 const가 아닌 가리키는 대상의 const라서 제거됨
}





