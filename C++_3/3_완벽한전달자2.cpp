// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }


// �ذ�å 
// ��Ģ 1. ���� �Լ��� ���ڸ� �������� �����̾�� �Ѵ�.
// ��Ģ 2. ���� �Լ��� lvalue ����, rvalue ������ 2�� �Լ� ����.
//		   ( const ������ �ʿ��ϴ�.)
// ��Ģ 3.
template<typename F> void logTime(F f, int& arg)
{
	f(arg);
}
template<typename F> void logTime(F f, int&& arg)
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





