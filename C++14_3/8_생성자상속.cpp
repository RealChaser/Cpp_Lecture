
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
	// �ڽİ� �̸��� ������ �Լ��� �θ� ������ ����Ҽ� ����.
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

