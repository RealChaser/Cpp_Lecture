// 13_멤버변수이름충돌.cpp
#include <iostream>
using namespace std;

struct Base 
{
	int value = 10;
};
struct Derived : public Base
{
	int value = 20;
};

int main()
{
	Derived d;
	cout << d.value << endl; // 20

	// 부모 멤버 접근
	cout << d.Base::value << endl;

	// 부모 타입으로 변환후 출력
	cout << ((Base)d).value << endl;  // 값 캐스팅 - 임시객체 생성..
	cout << ((Base&)d).value << endl; // 참조 캐스팅 - 임시객체 생성 안됨

	//((Base)d).value = 30; // 임시객체는 lvalue가 될수 없다. error

	((Base&)d).value = 30; // ok..
}







