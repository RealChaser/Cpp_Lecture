#include <iostream>
//#include <boost\\type_index.hpp>
using namespace std;
//using namespace boost;
//using namespace boost::typeindex;

// ��Ģ 2. ������ Ÿ���� ���� Ÿ���̸� �Լ� ���ڰ� ������ �ִ� ���� �Ӽ��� ���ŵȴ�. (const, volatile�� �����Ѵ�.)
template<typename T> void foo(T& a)
{
	// C++ ǥ�� RTTI�� ����ؼ� Ÿ�� ���ϱ�.
	// const �� volatile �� ������ ��� ����.,
	// cout << typeid(T).name() << ", a : " << typeid(a).name() << endl;

	// boost�� ����ؼ� ��� ���
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

template<typename T> void goo(const T& a)
{}

int main()
{
	int n = 10;
	int&r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T : int   a : int&
	foo(r); // T : int   a : int&
	foo(c); // T : const int  a : const int&
	foo(cr);// T : const int  a : const int&

	goo(n); // T : int   a : const int&
	goo(r); // T : int   a : const int&
	goo(c); // T : int   a : const int&
	goo(cr);// T : int   a : const int&
}





