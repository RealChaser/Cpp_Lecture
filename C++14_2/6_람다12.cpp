#include <iostream>
using namespace std;

//멤버 데이타 캡쳐

class Test
{
	int data;
public:
	void foo() // void foo(Test* const this)
	{
		//auto f1 = []() { data = 20;};  // error
		//auto f1 = [data]() { data = 20; };  // error

		//auto f1 = [ this]() { data = 20; };  // ok.

		auto f1 = [=]() { data = 20; };  // ok.

		f1();

		cout << data << endl; // 20나올까요 ??ok.. 주소를 담았으므로 변경된다.


		// 주소가 아닌 값으로 - C++17 에서 지원.
		auto f2 = [*this]() { data = 20; };  // error
	}
};

int main()
{
	Test t;
	t.foo();
}




