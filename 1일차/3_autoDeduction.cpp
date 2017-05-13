// 3_autoDeduction
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// auto �߷��� ���ø��� ����
	// T a = �Լ�����
	auto a1 = n; // int
	auto a2 = r; // int	-> reference ���� ��
	auto a3 = c; // int  -> const ���� ��
	a3 = 10;	 // ok

	// T& a = �Լ�����
	auto& a4 = n; // auto : int    a4 : int&
	auto& a5 = r; // auto : int    a5 : int&
	auto& a6 = c; // auto : const int  a6 : const int&
	a6 = 10; // error


	int x[3] = { 1,2,3 };
	auto  a7 = x; // int a7[3] = x; �� �ɼ� �����Ƿ� ( auto : int* )
	auto& a8 = x; // auto : int[3]  a8 : int(&)[3]

	cout << typeid(a7).name() << endl; 
	cout << typeid(a8).name() << endl; 
}