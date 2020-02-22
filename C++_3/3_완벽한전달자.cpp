// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }

// �Ϻ��� ������(perfect forwarding)

// ���� �Լ��� ���鶧 ���� �Լ����� ���ڸ� �Ϻ��ϰ� �����ϴ� ���.

template<typename F, typename T> void logTime(F f, const T& arg)
{
	f(arg);
}

int main()
{
	int n = 10;

	logTime(foo, 0); //foo(0);
	logTime(goo, n); //goo(n);

	cout << n << endl; // 20
}





