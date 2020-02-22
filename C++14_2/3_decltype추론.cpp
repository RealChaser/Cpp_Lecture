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
	auto a1 = r; // 템플릿 추론 규칙   int
	decltype(r) d1 = r; // r의 선언을 조사해서 사용.즉, 정확한 타입..

	// 함수 리턴값과 auto 
	//auto ret = foo();

	//decltype( foo() ) ret = foo();

	// C++ 14문법. 우변을 보고 타입을 결정하는데.. decltype 규칙으로..
	decltype(auto) ret = foo();

	ret = 30;

	cout << x << endl;
}







