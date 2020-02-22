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

	auto f1 = [](int a) { return a + g;}; // ok. 전역변수 접근 가능.

//	auto f2 = [](int a) { return a + v1 + v2;}; // error. 지역변수는 접근안됨.



	// capture by value

	auto f3 = [=](int a) { return a + v1 + v2;}; // ok..

	//auto f4 = [=](int a) { v1 = 100;return a + v1 + v2;}; 
				// error :  상수함수인 () 연산자에서 멤버 data를 변경할수 없다.
	

	// mutable 람다 : ()연산자 함수가 비상수 함수로 만들어 진다.
	auto f5 = [=](int a) mutable { v1 = 100;return a + v1 + v2;};

	f5(0); // v1 = 100이 실행되었지만 복사본이 변경됩니다.

	cout << v1 << endl; // 10


	cout << sizeof(f5) << endl; // 람다객체의 크기 => 8



	/*
	// capture by value 일때의 Closure 클래스 모양
	class LamdaClass
	{
		int v1;
		int v2; // 지역변수를 캡쳐하기 위한 멤버 data
	public:
		LambdaClass(int a, int b) : v1(a), v2(b) {}

		int operator()(int a) //const
		{
			v1 = 100;
			return a + v1 + v2;
		}
	};
	auto f3 = LambdaClass(v1, v2);
	*/
}












