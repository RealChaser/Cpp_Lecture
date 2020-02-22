// 11_logTime
// 3_완벽한전달자9
#include <iostream>
using namespace std;




/*
// 문제점 : f, args 변수를 선언하기 전에 사용하고 있다.
template<typename F, typename ... Types>
decltype(f(forward<Types>(args)...))  logTime(F f, Types&& ... args)
{
	return f(forward<Types>(args)...);
}
*/

// 아래 표현은 정확합니다. - C++11
/*
template<typename F, typename ... Types>
auto logTime(F f, Types&& ... args) -> decltype(f(forward<Types>(args)...)) 
{
	return f(forward<Types>(args)...);
}
*/

// trailing return 생략 가능..
// 하지만, 원본 함수가 int&를 리턴할때 auto는 참조를 제거한 int 리턴.
/*
template<typename F, typename ... Types>
auto logTime(F f, Types&& ... args) 
{
	return f(forward<Types>(args)...);
}
*/

// 아래 처럼 하면 됩니다. - 최종 코드!! - C++14
template<typename F, typename ... Types>
decltype(auto) logTime(F f, Types&& ... args)
{
	return f(forward<Types>(args)...);
}

int x = 0;
int& foo(int a) { return x; }

int main()
{
	int& ret = logTime(foo, 0);
	ret = 30;

	cout << x << endl; // 30
}












