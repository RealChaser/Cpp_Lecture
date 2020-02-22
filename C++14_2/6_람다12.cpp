#include <iostream>
using namespace std;

//��� ����Ÿ ĸ��

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

		cout << data << endl; // 20���ñ�� ??ok.. �ּҸ� ������Ƿ� ����ȴ�.


		// �ּҰ� �ƴ� ������ - C++17 ���� ����.
		auto f2 = [*this]() { data = 20; };  // error
	}
};

int main()
{
	Test t;
	t.foo();
}




