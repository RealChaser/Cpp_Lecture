// 14_������ ��� - 218 page
#include <iostream>
using namespace std;

class Base
{
public:
	void foo(double d) { cout << "double" << endl; }
	void foo(int, int) { cout << "int, int" << endl; }
};
class Derived : public Base
{
public:
	// �ڽ��Լ��� ������ �̸��� �θ� �Լ��� ��������. ����Ҽ� ����. C++98����
	void foo(int) { cout << "int" << endl; }

	// �θ��� foo�� ����Ҽ� �ְ� �ش޶�
	using Base::foo;
};
int main()
{
	Derived d;
	d.foo(2.3); // "double"   "int"
	d.foo(1, 1);// "int,int"   error
}
// ARM : Annoted Reference Manual - �� Stroupstrup 




