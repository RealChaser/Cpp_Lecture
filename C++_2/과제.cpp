// ����
#include <iostream>
using namespace std;

void foo(int a, char c) {}

template<typename T> void goo(T& a)
{
	//���� : �Ʒ� 2�� ����� ������.
	typename ResultType<T>::type r;

	typename ArgumentType<1, T>::type a1;

	cout << typeid(r).name() << endl; // void
	cout << typeid(a1).name() << endl; // ?
}

int main()
{
	goo(foo);
}


