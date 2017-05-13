// 3_람다표현식10

#include <iostream>
using namespace std;

/*
// 함수 인자는 결국 지역변수입니다.
void goo(int a, int b)
{
	int c;
	auto f = [=]() {return a + b +c; }; // ok..

	cout << sizeof(f) << endl; // 12
}
*/

// 35 page 아래쪽
class Test
{
	int data;
public:
	void foo()   // void foo( Test* this)
	{
		// 람다 표현식에서 : 멤버 data 접근
		//auto f = []() { return data; } //error
		//auto f = [data]() { return data; } // error

		// this를 캡쳐하면 멤버 data접근 가능
		auto f = [=]() { return data; } // ok
		auto f = [this]() { return data; } // ok

		auto f = [=]() { data = 100;  return data; } // ok. ?

		// 값변경이 안되게 하려면 - c++17 부터 지원
		auto f = [*this]() { data = 100;  return data; }
		    // error. data 변경 안됨.
	}
};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}


