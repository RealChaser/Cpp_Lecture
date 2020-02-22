// 8_타입추론 - 121 page
#include <iostream>
using namespace std;

void goo( int a) { }
// 규칙 1. 템플릿 인자가 값타입으로 되어 있을때 - 129
//         인자로 전달되는 표현식(객체), 참조, const, volatile 속성은 제거하고
//         타입결정.
template<typename T> void foo(T a) 
{
	a = 30;
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T는 int
	foo(r); // T는 int
	foo(c); // T는 int
	foo(cr);// T는 int

	const char* const ptr = "hello";

	foo(ptr); // T : const char* => 인자인 ptr의 상수성만 제거 - 129 page
				
}





