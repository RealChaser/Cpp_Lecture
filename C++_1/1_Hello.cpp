// 1_Hello.cpp
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// 2 page 그림 - www.isocpp.org


int main()
{
	cout << "hello" << endl;


	int n1 = 0b1010'0000; // C++11 부터 2진수 지원
	
	cout << n1 << endl;
	int n2 = 1'000'000;


	int x[5] = { 1,2,3,4,5 };

	auto n3 = x[0]; // 우변의 타입으로 좌변 타입을 결정해 달라.

	//decltype(x[0]) n4;// = x[0];  // () 안의 타입과 동일타입 변수 n4
						// error. int& 로 결정됩니다.

	// C++98 for..
	for (int i = 0; i < 5; i++)
		cout << x[i] << endl;

	// C++11 style
	for (auto n : x)
		cout << n << endl;


	float f = 3.4f;

	//minutes m = 3min; // ?
	seconds m = 3min; // ?

	cout << m.count() << endl;
}








//int foo() // C++98 style 함수

auto foo() -> int  // C++11/14 style - trailing return
{
	return 0;
}












// 빌드        : Shift + Ctrl + B
// 빌드 + 실행 : Ctrl + F5
