#include <iostream>
using namespace std;
// reference collapse
typedef int&  LREF;
typedef int&& RREF;

int main()
{
	int n = 10;

	LREF r1 = n;
	RREF r2 = 10;

	LREF&  r3 = n; // int& & => int&
	RREF&  r4 = n; // int&& & => int&
	LREF&& r5 = n; // int& && => int&
	RREF&& r6 = 10; // int&& && => int&&

	// 레퍼런스 충돌을 직접 사용할수 없다.
	int& && r7 = n; // error
}

template<typename T> void foo(T& a) {}

foo<int&>(n); // a의 타입은? => int& & => int&



