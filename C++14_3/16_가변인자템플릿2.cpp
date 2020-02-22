#include <iostream>
using namespace std;

void goo(int a, double d, int n)
{
	cout << "goo"  << a << ", " << d << ", " << n<< endl;
}
int hoo(int a) { return -a; }

template<typename ... Types> void foo(Types ... args)
{
	// args : parameter pack
	cout << sizeof...(args) << endl;
	cout << sizeof...(Types) << endl;

	// pack expansion
	goo(args...);

	//goo(hoo(args...)); // error
	goo(hoo(args)...); // goo( hoo(args'1인자), hoo(args2번째), hoo(args3번째));

	goo(++args...); // www.cppreference.com 사이트에 정리 잘되어 있습니다.

}

int main()
{
	foo(1, 3.4, 4); // Types : int, double, int
					// args : 1, 3.4, 4
}









