#include <iostream>
using namespace std;

// T���� ������(������)Ÿ�� ���ϱ�

// 1. ����ϴ� �ڵ带 ���� primary template ���� - ��κ� ����ü�� ����
template<typename T> struct xremove_pointer
{
	typedef T type;
};

// 2. �κ�����ȭ �������� Ÿ���� ������ �õ��Ѵ�.
template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};

xremove_pointer<int*>::type n;


template<typename T> void foo(T a)
{
	typename xremove_pointer<T>::type n;

	cout << typeid(n).name() << endl; // int
}

int main()
{
	int n = 10;

	foo(&n);
}


