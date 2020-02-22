#include <iostream>
using namespace std;

// 규칙 1. param 타입이 값 타입일때
//         함수 인자가 가진 const, volatile, reference 속성은 모두 제거한다.
template<typename T> void foo( T param)
{
	cout << "T : " << typeid(T).name() << "\t\t" << "param : " << typeid(param).name() << endl;
}

template<typename T> void goo(const T param)
{
	cout << "T : " << typeid(T).name() << "\t\t" << "param : " << typeid(param).name() << endl;
}

int main()
{
	int n = 1;
	const int c = n;
	int&  r = n;
	const int& cr = c;

	foo(n); //  T : int  param : int
	foo(c); //  T : int  param : int
	foo(r); //  T : int  param : int
	foo(cr); // T : int  param : int

	goo(n); //  T : int  param : const int
	goo(c); //  T : int  param : const int
	goo(r); //  T : int  param : const int
	goo(cr); // T : int  param : const int
}






