#include <iostream>
using namespace std;


// 람다와 변수 캡쳐
// default capture by value
int g = 10;

int main()
{
	int v1 = 10, v2 = 20;

	auto f1 = [](int a) { return a + g;};        // ok..
	//auto f2 = [](int a) { return a + v1 + v2; }; // error.


	// = : default capture by value 
	auto f2 = [=](int a) { return a + v1 + v2; }; // ok..

	// 아래 처럼 하면 () 연산자가 상수 함수입니다.
	//auto f3 = [=](int a) { v1 = 100; return a + v1 + v2; }; //error

	// 아래 처럼 하면 () 연산자가 비상수 함수 입니다.
	auto f3 = [=](int a) mutable { v1 = 100; return a  + v1; };// ok

	f3(10); // 람다 호출 v1 =100실행됨..

	cout << v1 << endl; // 10


	cout << sizeof(f3) << endl; // ??  8
}



/*

class ClosureType  
{
	int v1;
	int v2; // 지역변수 값을 담기 위한 멤버 변수
public:
	ClosureType(int a, int b) : v1(a), v2(b) {}

	inline bool operator()(int a) //const
	{
		v1 = 100;	// ok
		return a + v1 + v2;
	}
};

auto f3 = ClosureType(v1, v2); // 지역변수 2개를 생성자에 전달





*/







