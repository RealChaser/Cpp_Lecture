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

	// ���۷��� �浹�� ���� ����Ҽ� ����.
	int& && r7 = n; // error
}

template<typename T> void foo(T& a) {}

foo<int&>(n); // a�� Ÿ����? => int& & => int&



