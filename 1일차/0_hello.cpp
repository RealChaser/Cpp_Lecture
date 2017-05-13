//0. C++ 신기능 간단한 소개

#include <iostream>
#include <string>
#include <complex>
#include <chrono>

using namespace std;
using namespace std::chrono;

void foo(string s)      { cout << "string" << endl; }
void foo(const char* s) { cout << "const char*" << endl; }

// 후위리턴표기( suffix return type)
auto foo() -> int
{
}

int main()
{
	int n1 = 0b10;			// 0b : 2진수 
	int n2 = 1'000'000;		// ' 는 의미는 없지만 가독성 향상을 위한 자릿수 분리로 사용가능
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	auto n3 = x[1]; // 우변의 수식으로 좌변의 타입 결정 (int 로 결정)
	decltype(n3) n4 = n3; // () 안의 변수와 동일타입의 변수 선언
	decltype(x[1]) d1 = x[1]; // int&
	
	for (auto n : x) // range for  foreach()
	{
		cout << n << endl;
	}

	float f = 3.4f; // l

	foo("hello"); // const char*
	foo("hello"s); // string	-> 문자열 뒤에 s 는 string

	seconds s = 10min + 23s;	// -> 정수형 뒤에 s는 second
	cout << s.count() << endl; // 623
}