// 10_auto�߷�
#include <iostream>
using namespace std;

int a = 0;
int& foo() { return a; }

int main()
{
	int n = 10;
	int& r = n;
	int x[5] = { 1,2,3,4,5 };

	auto a1 = r; // int
	auto a2 = x; // int*
	auto& a3 = x; // int(&a3)[10]

	// decltype(�ɺ�) : �ɺ��� ������ ���� ��Ȯ�� Ÿ������ ���ش�
	decltype(r) d1 = r; // int&
	//decltype(x) d2 = x; // int d2[5] = x �̹Ƿ�error

	decltype(x) d2 = { 1,2,3,4,5 }; //ok


	auto ret= foo(); // int
	ret = 10;
	cout << a << endl;


	decltype( foo() ) ret2 = foo(); // int& ret = foo()

	// decltype(auto) : �캯�� �������� Ÿ���� �����ش޶�.
	//					��, decltype()�� ��Ģ���� ������ �޶�.
	decltype(auto) ret3 = foo(); // ���� ���.!


//	const int MAX_PATH = 10;
//	int = MAX_PATH;
//	n = 20;
}












