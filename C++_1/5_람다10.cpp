// 5_����
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


		// �ּ��� ���簡 �ƴ� ��ü�� ���纻 ��� - C++17 ���� �Ʒ� ǥ�� ���.
		//auto f5 = [*this](int a) mutable { data = 0;return a + data;}; // ok..
	}
};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}












