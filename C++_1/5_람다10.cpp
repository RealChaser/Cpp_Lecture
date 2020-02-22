// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

class Test
{
	int data;
public:
	void foo() // void foo( Test* this)
	{
		//auto f1 = [](int a) { return a + data;}; // error
		//auto f2 = [data](int a) { return a + data;}; // error
		//auto f3 = [ this ](int a) { return a + data;}; // ok..
		
		auto f4 = [=](int a) { data = 10;return a + data;}; // 
		f4(0);

		cout << data << endl; // ok.. 10


		// 주소의 복사가 아닌 객체의 복사본 사용 - C++17 부터 아래 표현 허용.
		//auto f5 = [*this](int a) mutable { data = 0;return a + data;}; // ok..
	}
};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}












