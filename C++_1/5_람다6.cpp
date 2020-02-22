// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// 람다와 리턴 타입 - 32 page
int main()
{
	// 1. 리턴값 표기는 trailing return(postfix return syntax) 문법.
	auto f1 = [](int a, int b) -> int { return a + b;};

	// 2. return 문장이 하나인 경우 리턴 타입 생략가능.
	auto f2 = [](int a, int b) { return a + b;};

	
	// 3. return 문이 여러개 있어도 같은 타입이면 리턴 타입 생략가능
	auto f3 = [](int a, int b) { if (a == 1) return a; return b;};

	// 4. return 문이 여러개 있고 다른 타입을 리턴하면 리턴 타입 생략할수 없다.
	auto f4 = [](int a, int b) -> double { if (a == 1) return a ; return 3.4;};

}












