// 7_완벽한전달자주의사항
#include <iostream>
using namespace std;

template<typename F, typename ... Types>
void logTime(F f, Types&& ... args)
{
	f(forward<Types>(args)...);
}
//-----------------------------------------------
void foo(int* p) {}

int    square(int a)    { return a * a; }
double square(double a) { return a * a; }

template<typename T> void goo(T a) {}

int main()
{
	//logTime(foo, 0);
	logTime(foo, nullptr);

	square(3); // ok..
	//logTime(square, 3); // error

	// 함수타입은 값 캐스팅이 안됩니다. - 오늘 7교시때...
	//logTime( (int(&)(int))square, 3); // 또는 함수포인터로 캐스팅

	logTime(static_cast<int(&)(int)>(square), 3);


	goo(3);//ok.

	//logTime(goo, 3); // error
	logTime(goo<int>, 3); // ok..
}












