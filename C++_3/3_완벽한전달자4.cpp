// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }



// int&  : lvalue reference
// int&& : rvalue reference
// T&    : lvalue reference
// T&&   : forwarding reference(Universal reference)

//         �Լ����ڷ� lvalue�� ���� T�� ����Ÿ��(int&)
//                   rvalue�� ���� T�� ��Ÿ��(int)

// ��� : T&& �� �Լ��� ����� int�� ��� int& ������ ,int&& ������ �Լ��� 
//       �ڵ����� �ȴ�.!
template<typename F, typename T> void logTime(F f, T&& arg)
{
	f(static_cast<T&&>(arg));
}

int main()
{
	int n = 10;
	logTime(goo, n); // lvalue, T = int&    T&& : int& && => int&
	logTime(foo, 0); // rvalue, T = int     T&& : int&&
}



/*
//template<typename T> void foo(T& a) {} // lvalue reference
template<typename T> void foo(T&& a) {} // rvalue reference ��� �Ҽ� ����.
										// ����� �ڵ忡 ���� �޶����� �ִ�.

int n = 10;
foo<int&>(n);  // int& &&  => int&
foo<int&&>(0); // int&& && => int&&

foo(n); // T&&�� ��� �����ؾ� �ұ�? ���� T�� �����ؾ� �Ѵ�.
foo(0); // ���ο� ������ �ʿ� �ߴ� => ���� ����..
*/














