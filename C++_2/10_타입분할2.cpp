// 10_Ÿ�Ժ���
#include <iostream>
#include <type_traits>
using namespace std;


// 1. template �� ����ؼ� ����ü�� �����.
// 2. typedef T type; �� �ִ´�.

// 3. �κ� ����ȭ�� ���ؼ� T Ÿ���� ���� �Ӽ����� ���ϴ� Ÿ���� �������� �и��Ѵ�.

template<typename T> struct xremove_pointer
{
	typedef T type;
};

template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};


template<typename T> void foo(T a)
{
	typename xremove_pointer<T>::type n;  //xremove_pointer<int*>::type n;  //

	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 0;
	foo(&n);
}




