#include <iostream>
using namespace std;
// template Ÿ�� �߷�
template<typename T> void foo(T a)
{
	++a;
	a = 30;
}

int main()
{
	int  n = 1;
	int& r = n;
	const int  c = n;
	const int& cr = n;

	foo(n); // T : int
	foo(c); // T : int
	foo(r); // T : int
	foo(cr); // T : int
}


