// 14_auto�߷�
#include <iostream>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost;
using namespace boost::typeindex;

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// T param = �Լ�����
	auto n2 = c; // int  auto ���̹Ƿ� : const, volatile, reference����
	auto n3 = r; // int
	auto& n4 = c;//  auto : const int   n4 : const int&





	int x[10] = { 0 };
	auto  p  = x; // int*
	auto& r2 = x; // int (&r2)[10] 


	// ���� : ���ø� �Լ� ����(auto�� �캯)�� ������� ����.
	const char* const s = "hello";

	auto s2 = s; //  s2�� Ÿ����?  const char* 


	cout << type_id_with_cvr<decltype(s2)>().pretty_name() << endl;
}






