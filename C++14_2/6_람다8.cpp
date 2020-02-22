#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// 람다와 리턴타입
int main()
{
	auto f1 = [](int a, int b) { return a + b;};

	auto f2 = [](int a, int b) ->int { return a + b; };

	auto f3 = [](int a, int b)  { if (a == 0)
											return a; 
										return b; };

	// 2개이상의 리턴문에서 서로 다른 타입을 리턴할경우
	// 반드시 리턴 표시를 해야 한다.
	auto f4 = [](int a, double b) -> double { if (a == 0)
									return a;
									return b; };


}












