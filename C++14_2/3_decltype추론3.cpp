#include <iostream>
using namespace std;

int x = 10;

int& foo(int a) { return x; }

// 완벽한 전달자와 함수 리턴..

// 1 auto 사용 : 참조가 버려지므로 안된다.
/*
template<typename F, typename ... T> 
auto logTime(F f, T&& ... arg) 
{
	return f(forward<T>(arg)...);
}
*/

// f변수가 뒤에 선언되어 있다. - 컴파일 에러
/*
template<typename F, typename ... T>
decltype(f(forward<T>(arg)...)) logTime(F f, T&& ... arg)
{
	return f(forward<T>(arg)...);
}
*/

// ok.. 하지만 복잡해 보인다.
/*
template<typename F, typename ... T>
auto logTime(F f, T&& ... arg) -> decltype(f(forward<T>(arg)...))
{
	return f(forward<T>(arg)...);
}
*/

template<typename F, typename ... T>
decltype(auto) logTime(F f, T&& ... arg) 
{
	return f(forward<T>(arg)...);
}


int main()
{
	int& r = logTime(foo, 0);
	r = 30;

	cout << x << endl;
}



