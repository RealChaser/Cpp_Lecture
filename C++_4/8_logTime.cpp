#include <iostream>
#include <functional>
#include <type_traits>
using namespace std;

template<typename F, typename ... Types>
decltype(auto) logTime(F&& f, Types&& ... args)
{
//	static_assert(is_function<F>::value, "1'st argument must be function");

	return f(forward<Types>(args)...);
}

int main()
{
	//less<int> f;
	//logTime(f, 1, 2
	// logTime(less<int>(), 1, 2);

	logTime([](int a, int b) { return a + b;}, 1, 2);
}







