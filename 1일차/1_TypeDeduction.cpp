// 1_TypeDeduction.cpp
#include <iostream>
using namespace std;
template<typename T> void foo(T a)
{
	while (a--) {} // ������ �۾� ����.
}
int main()
{
	int n = 5;
	foo(n); //  T �� int

	int& r = n;
	foo(r); // T  int

	const int c = n;
	foo(c); // T  int

	
}

