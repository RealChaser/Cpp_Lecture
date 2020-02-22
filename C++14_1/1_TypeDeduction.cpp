// 1_TypeDeduction.cpp
#include <iostream>
using namespace std;
template<typename T> void foo(T a)
{
	while (a--) {} // 임의의 작업 수행.
}
int main()
{
	int n = 5;
	foo(n); //  T 는 int

	int& r = n;
	foo(r); // T  int

	const int c = n;
	foo(c); // T  int

	
}

