// 14_생성자 상속 - 218 page
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
	// 자식함수와 동일한 이름의 부모 함수는 가려진다. 사용할수 없다. C++98문법
	void foo(int) { cout << "int" << endl; }

	// 부모의 foo도 사용할수 있게 해달라
	using Base::foo;
};
int main()
{
	Derived d;
	d.foo(2.3); // "double"   "int"
	d.foo(1, 1);// "int,int"   error
}
// ARM : Annoted Reference Manual - 얀 Stroupstrup 




