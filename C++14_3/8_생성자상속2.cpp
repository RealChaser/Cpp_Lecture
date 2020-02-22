#include <iostream>
using namespace std;

class Base
{
	int data;
public:
	Base(int n) : data(n) {}
};
class Derived : public Base
{
public:
	Derived()  : Base(0) {}

	//Derived(int a) : Base(a) {}

	using Base::Base; // 생성자 상속
};

int main()
{
	Derived d1;
	Derived d2(0);

}



