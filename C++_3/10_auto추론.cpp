// 10_auto추론
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

	// decltype(심볼) : 심볼의 선언을 보고 정확한 타입으로 해준다
	decltype(r) d1 = r; // int&
	//decltype(x) d2 = x; // int d2[5] = x 이므로error

	decltype(x) d2 = { 1,2,3,4,5 }; //ok


	auto ret= foo(); // int
	ret = 10;
	cout << a << endl;


	decltype( foo() ) ret2 = foo(); // int& ret = foo()

	// decltype(auto) : 우변의 수식으로 타입을 결정해달라.
	//					단, decltype()이 규칙으로 결정해 달라.
	decltype(auto) ret3 = foo(); // 자주 사용.!


//	const int MAX_PATH = 10;
//	int = MAX_PATH;
//	n = 20;
}












