// 14_생성자 상속 - 218 page
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
	int data2 = 0;
public:
	using Base::Base; // 부모 생성자를 상속해 달라!

	//Derived(int n) : Base(n) {  } // 부모에 default 생성자가 없으면
								// 반드시 자식에서 명시적으로 호출해야 한다.
};

int main()
{
	//Derived d; // error
	Derived d(5);
}




