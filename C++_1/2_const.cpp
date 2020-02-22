//2_const - 4 page
#include <iostream>
using namespace std;

// 5 page.아래..
int n = 10;

// p1과 p2의 차이점을 생각해보세요(C에서 배운 내용)
const int* p1 = &n; // p1을 따라가면 const
int* const p2 = &n; // p2자체가 const..

int const* p3 = &n; //_p1_ 와 동일.





// 1. const 위치 이야기 - C++98

template<typename T> class Base
{
public:
	// a는 const이다.!!
	//virtual void foo(const T a) { cout << "Base foo" << endl; }
	virtual void foo( T const a) { cout << "Base foo" << endl; }
};

class Derived : public Base<int*>
{
public:
	// foo 재정의 해 보세요.. Derived foo라고 출력하세요
	// a를 따라가면 const이다. a자체는 const 아님.
	virtual void foo(const int* a) { cout << "Derived foo" << endl; }

	//virtual void foo(int* const a) { cout << "Derived foo" << endl; }
};

int main()
{
	Base<int*>* p = new Derived;
	p->foo(0); // "Derived foo" 나와야 합니다.



	const int c1 = 10;
	int const c2 = 10; // 위 코드와 완전히 동일한 코드입니다.
}






