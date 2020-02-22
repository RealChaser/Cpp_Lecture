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
	goo(hoo(args)...); // goo( hoo(args'1����), hoo(args2��°), hoo(args3��°));

	goo(++args...); // www.cppreference.com ����Ʈ�� ���� �ߵǾ� �ֽ��ϴ�.

}

int main()
{
	foo(1, 3.4, 4); // Types : int, double, int
					// args : 1, 3.4, 4
}









