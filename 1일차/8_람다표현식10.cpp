// 3_����ǥ����10

#include <iostream>
using namespace std;

/*
// �Լ� ���ڴ� �ᱹ ���������Դϴ�.
void goo(int a, int b)
{
	int c;
	auto f = [=]() {return a + b +c; }; // ok..

	cout << sizeof(f) << endl; // 12
}
*/

// 35 page �Ʒ���
class Test
{
	int data;
public:
	void foo()   // void foo( Test* this)
	{
		// ���� ǥ���Ŀ��� : ��� data ����
		//auto f = []() { return data; } //error
		//auto f = [data]() { return data; } // error

		// this�� ĸ���ϸ� ��� data���� ����
		auto f = [=]() { return data; } // ok
		auto f = [this]() { return data; } // ok

		auto f = [=]() { data = 100;  return data; } // ok. ?

		// �������� �ȵǰ� �Ϸ��� - c++17 ���� ����
		auto f = [*this]() { data = 100;  return data; }
		    // error. data ���� �ȵ�.
	}
};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}


