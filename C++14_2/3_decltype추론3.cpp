#include <iostream>
using namespace std;

int x = 10;

int& foo(int a) { return x; }

// �Ϻ��� �����ڿ� �Լ� ����..

// 1 auto ��� : ������ �������Ƿ� �ȵȴ�.
/*
template<typename F, typename ... T> 
auto logTime(F f, T&& ... arg) 
{
	return f(forward<T>(arg)...);
}
*/

// f������ �ڿ� ����Ǿ� �ִ�. - ������ ����
/*
template<typename F, typename ... T>
decltype(f(forward<T>(arg)...)) logTime(F f, T&& ... arg)
{
	return f(forward<T>(arg)...);
}
*/

// ok.. ������ ������ ���δ�.
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



