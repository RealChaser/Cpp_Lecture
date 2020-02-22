// 8_타입추론2
#include <iostream>
using namespace std;

// 규칙 2. 템플릿 인자가 참조 타입일때 - 130 page
//         T를 결정할때 함수인자로 전달되는 객체의 참조 속성만 제거한다.
//         const와 volatile 속성은 유지 된다.
template<typename T> void foo(T& param)
{
	cout << "T     : " << typeid(T).name()     << "   ";
	cout << "param : " << typeid(param).name() << endl;
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T: int   param : int&
	foo(r); // T는 int&  param : int& & => int&  가아니라 아래처럼된다.
			// T: int   param : int& 

	foo(c); // T: const int   param : const int&

	foo(cr);// T: const int   param : const int&
}