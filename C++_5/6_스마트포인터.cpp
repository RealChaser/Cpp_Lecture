// 6_스마트포인터 - 159 page
#include <iostream>
using namespace std;

class Car
{
public:
	void Go() { cout << "Car Go" << endl; }
};
// 개념 : 임의의 객체가 다른 타입의 포인터 역활을 하는 것.

// 원리 : ->, * 연산자를 재정의 해서 포인터 처럼 보이게 한다.

// 장점 : 진짜 포인터가 아니라 객체이다.
//	      생성/복사/대입/소멸의 모든 과정을 사용자가 제어가능.
//        보통 소멸자에서 자동 삭제 기능 구현

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*()   { return *obj; } // 주의 .. 반드시 참조리턴해야 합니다.
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car )

	p->Go(); // ( p.operator->()) Go() 의 모양이지만
			 // ( p.operator->())->Go() 처럼 해석 됩니다.

	(*p).Go();
}





