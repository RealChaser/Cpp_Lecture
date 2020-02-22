// 3_�Ϻ���������9
#include <iostream>
using namespace std;




template<typename F, typename ... Types> 
void logTime(F f, Types&& ... args)
{
	f(forward<Types>(args)...);
}

void foo(int a, int& b, int&& c)
{
	b = 30;
	cout << "foo" << endl;
}
void goo() {}

int main()
{
	int n = 10;
	logTime(foo, 10, n, 30);
	logTime(goo);

	cout << n << endl;// 30
}












