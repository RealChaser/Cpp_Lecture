#include <iostream>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost;
using namespace boost::typeindex;

// foo(T   a); // ��Ģ 1
// foo(T&  a); // ��Ģ 2
// foo(T&& a); // ��Ģ 3

// ��Ģ 3. Forward Reference

template<typename T> void foo(T&& a)
{
	cout << "T   : " << type_id_with_cvr<T>().pretty_name() << "   ";
	cout << "T&& : " << type_id_with_cvr<T&&>().pretty_name() << endl;
}

int main()
{
	int n = 10;
	foo(n); // lvalue T : int&      T&& : int& && => int&
	foo(0); // rvalue T : int       T&& : int&&
}




