// 10_Ÿ�Ժ���
#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct ArrayBaseType
{
	typedef T type;
};

template<typename T, int N> struct ArrayBaseType<T[N]>
{
	typedef T type;
};


template<typename T> void foo(const T& a)
{
	typename ArrayBaseType<T>::type n;  // ����� ������.

	cout << typeid(n).name() << endl; // int ������ �غ�����..
}

int main()
{
	int x[5] = { 0 };
	foo(x);
}




