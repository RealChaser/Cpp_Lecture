// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }


// ��Ģ 1. T&&�� ���ڸ� �޴´�.
//     2. ������ ������ forward<T>(arg)�� ��� ���ڸ� ������.

template<typename F, typename T> void logTime(F f, T&& arg)
{
	f(forward<T>(arg));
}


int main()
{
	int n = 10;
	logTime(goo, n);
}












