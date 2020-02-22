// 11_logTime
// 3_�Ϻ���������9
#include <iostream>
using namespace std;




/*
// ������ : f, args ������ �����ϱ� ���� ����ϰ� �ִ�.
template<typename F, typename ... Types>
decltype(f(forward<Types>(args)...))  logTime(F f, Types&& ... args)
{
	return f(forward<Types>(args)...);
}
*/

// �Ʒ� ǥ���� ��Ȯ�մϴ�. - C++11
/*
template<typename F, typename ... Types>
auto logTime(F f, Types&& ... args) -> decltype(f(forward<Types>(args)...)) 
{
	return f(forward<Types>(args)...);
}
*/

// trailing return ���� ����..
// ������, ���� �Լ��� int&�� �����Ҷ� auto�� ������ ������ int ����.
/*
template<typename F, typename ... Types>
auto logTime(F f, Types&& ... args) 
{
	return f(forward<Types>(args)...);
}
*/

// �Ʒ� ó�� �ϸ� �˴ϴ�. - ���� �ڵ�!! - C++14
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












