// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// 람다와 변수 캡쳐 - 33 page

int g = 10;

int main()
{
	int v1 = 10;
	int v2 = 20;

//	auto f1 = [](int a) { return a + v1 + v2; }; // error
	auto f2 = [=](int a) { return a + v1 + v2; };// ok
//	auto f3 = [=](int a) { v1 = 100; return a + v1 + v2; }; // error
	auto f4 = [=](int a) mutable { v1 = 100; return a + v1 + v2; }; // ok
										// 복사본 변경

	// capturing by reference
	auto f5 = [&](int a) { v1 = 100; return a + v1 + v2; };//

	f5(0);

	cout << v1 << endl;
							
	// capture by reference 일때의 Closure 클래스 모양
	class LamdaClass
	{
		int& v1;
		int& v2; 
	public:
		LambdaClass(int& a, int& b) : v1(a), v2(b) {}

		int operator()(int a) const
		{
			v1 = 100; // v1이라는 참조가 변하는 것이 아니라
					  // v1이 가르키는 곳 변경..그래서. ok..
			return a + v1 + v2;
		}
	};
	auto f3 = LambdaClass(v1, v2);
								
}












