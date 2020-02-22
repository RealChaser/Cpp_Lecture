#include <iostream>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost;
using namespace boost::typeindex;

int x = 10;

int& foo() { return x; }

int main()
{
	int n = 10;
	int& r = n;
	auto a1 = r; // ���ø� �߷� ��Ģ   int
	decltype(r) d1 = r; // r�� ������ �����ؼ� ���.��, ��Ȯ�� Ÿ��..

	// �Լ� ���ϰ��� auto 
	//auto ret = foo();

	//decltype( foo() ) ret = foo();

	// C++ 14����. �캯�� ���� Ÿ���� �����ϴµ�.. decltype ��Ģ����..
	decltype(auto) ret = foo();

	ret = 30;

	cout << x << endl;
}







