// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }

void hoo(int&& a) { cout << "foo" << endl; }



// �ذ�å 
// ��Ģ 1. ���� �Լ��� ���ڸ� �������� �����̾�� �Ѵ�.

// ��Ģ 2. ���� �Լ��� lvalue ����, rvalue ������ 2�� �Լ� ����.
//		   ( const ������ �ʿ��ϴ�.)

// ��Ģ 3. rvalue reference (int&&) ���������� ���� �Լ��� ���ڸ� ������
//		   rvalue�� ĳ�����ؼ� �����Ѵ�(static_cast<int&&>(arg))

template<typename F> void logTime(F f, int& arg)
{
	f(arg);

	//f(static_cast<int&>(arg)); // ĳ������ �ʿ������ �ص� �������.
								// ���� Ÿ���̹Ƿ� ���õȴ�.
}

template<typename F> void logTime(F f, int&& arg)
{
	//f(arg); // int&& arg = 10 ���� 10�� rvalue ������ arg�� lvalue�̴�.
			// hoo( int& ) �Լ��� ã�� �ȴ�.!

	f(static_cast<int&&>(arg)); // arg�� �ٽ� rvalue�� �����ؼ� ȣ��.
}


int main()
{
	hoo(10); // ok.. �ƹ� ���� ����.!!

	logTime(hoo, 10); // int&& arg = 10
}





