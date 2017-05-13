// 3_autoDeduction
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// auto 추론은 템플릿과 동일
	// T a = 함수인자
	auto a1 = n; // int
	auto a2 = r; // int	-> reference 제거 됨
	auto a3 = c; // int  -> const 제거 됨
	a3 = 10;	 // ok

	// T& a = 함수인자
	auto& a4 = n; // auto : int    a4 : int&
	auto& a5 = r; // auto : int    a5 : int&
	auto& a6 = c; // auto : const int  a6 : const int&
	a6 = 10; // error


	int x[3] = { 1,2,3 };
	auto  a7 = x; // int a7[3] = x; 가 될수 없으므로 ( auto : int* )
	auto& a8 = x; // auto : int[3]  a8 : int(&)[3]

	cout << typeid(a7).name() << endl; 
	cout << typeid(a8).name() << endl; 
}