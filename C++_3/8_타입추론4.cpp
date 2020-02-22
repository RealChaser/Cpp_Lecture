// 8_Ÿ���߷�2
#include <iostream>
using namespace std;

// boost ����ϱ�
#include <boost/type_index.hpp>
using namespace boost;
using namespace boost::typeindex;


// ��Ģ 2 ���.... - T& �϶��� ������ ���� �Ӽ��� ����, const, volatile�� ����
template<typename T> void foo(const T& param)
{
	cout << "T     : " << type_id_with_cvr<T>().pretty_name() << "   ";
	cout << "param : " << type_id_with_cvr<decltype(param)>().pretty_name() << endl;
}
int main()
{
	int n = 10;
	int& r = n;
	//auto a = r;
	const int c = n;
	const int& cr = c;

	foo(n); // T: int   param : const int&
	foo(r);	// T: int   param : const int&
	foo(c); // T: int   param : const int&
	foo(cr);// T: int   param : const int&
}