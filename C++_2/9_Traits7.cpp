// 9_Traits4
#include <iostream>
using namespace std;



template<int N> struct int2type  // 98 page
{
	enum { value = N };
};










/*
int main()
{
	foo(0);
	foo(1); // 0, 1�� ���� Ÿ��. foo(0), foo(1)�� ���� �Լ� ȣ��.

	int2type<0> t0;
	int2type<1> t1;

	foo(t0);
	foo(t1); // t0, t1�� �ٸ� Ÿ��. foo(t0), foo(t1)�� �ٸ� �Լ� ȣ��.
}
*/




template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };


// �Լ� �����ε��� ���� �Լ� dispatch
// www.google.com ���� "C++ IDioms" �˻�
// ù��° ��ũ ��������..

template<typename T> void printv_imp(T value, int2type<1> )
{
	cout << value << " : " << *value << endl;
}

template<typename T> void printv_imp(T value, int2type<0> )
{
	cout << value << endl;
}


template<typename T> void printv(T value)
{

	printv_imp(value, int2type< IsPointer<T>::value >());
}







int main()
{
	int n = 3;

	printv(n);
}







