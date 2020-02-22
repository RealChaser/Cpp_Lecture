// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }

template<typename T> struct identity
{
	typedef T type;
};

//template<typename T> T&& xforward(T& arg)
template<typename T> T&& xforward(typename identity<T>::type& arg)
{
	return static_cast<T&&>(arg);
}
template<typename F, typename T> void logTime(F f, T&& arg)
{
	// n�� lvalue, T : int&, T&& : int&
	// arg : int&
	//f(xforward(arg));  // �̼��� xforward()�� T�� ����Ÿ���ϱ�� ?
					   // T�� int, static_cast<T&&>(arg)�� �ᱹ
					   //          static_cast<int&&>(arg)

	// �ذ�å : xforward���� T�� Ÿ���� ����ڰ� �����Ѵ�
	f(xforward<T>(arg));// �̼��� xforward()�� T�� ����Ÿ���ϱ�� ?
						// T�� int&, static_cast<T&&>(arg)�� �ᱹ
						//          static_cast<int& &&>(arg)
}


int main()
{
	int n = 10;
	logTime(goo, n);
}












