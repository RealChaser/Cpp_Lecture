// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }


// static_cast<T&&>(arg) �� ���� �ϴ� �Լ�

// T&  : lvalue reference => lvalue �� ���� ����
// T&& : forwarding refernce => lvalue, rvalue ��� ����.

template<typename T> T&& xforward(T& arg)
{
	return static_cast<T&&>(arg);
}

template<typename F, typename T> void logTime(F f, T&& arg)
{
//	f(static_cast<T&&>(arg));
	f(xforward(arg)); // arg�� � ���� lvalue�̴�.
					  // xforward�� ���ڴ� T& �̸� ����Ѵ�.
					  // �׷��� logTime(goo, n) �϶� ���� �߻�..
}


int main()
{
	int n = 10;
	logTime(goo, n); 
//	logTime(foo, 0); 
}












