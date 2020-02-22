// 8_타입추론2
#include <iostream>
using namespace std;

// boost 사용하기
#include <boost/type_index.hpp>
using namespace boost;
using namespace boost::typeindex;


template<typename T> void foo(T& param)
{
	cout << "T     : " << type_id_with_cvr<T>().pretty_name()    << "   ";
	cout << "param : " << type_id_with_cvr<decltype(param)>().pretty_name() << endl;
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T: int   param : int&
	foo(r);	// T: int   param : int& 
	foo(c); // T: const int   param : const int&
	foo(cr);// T: const int   param : const int&
}