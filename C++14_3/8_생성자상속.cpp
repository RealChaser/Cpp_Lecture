
#include <iostream>
using namespace std;

class Base
{
public:
	void foo(int a)     { cout << "double" << endl; }
	void foo(int a, int b) { cout << "int, int" << endl; }
};
class Derived : public Base
{
public:
	// 자식과 이름이 동일한 함수가 부모에 있으면 사용할수 없다.
	void foo(double a) { cout << "int" << endl; }
	using Base::foo;
};

int main()
{
	Derived d;
	d.foo(0);

	d.foo(3.4); // error
	d.foo(1,2); // error
}

