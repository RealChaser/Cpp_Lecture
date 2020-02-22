// 3_�Ϻ��������� - ���� �߿� �մϴ�. - 142page ���� ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }


// ������ �Ϻ��� ������ �Ϸ���

// 1. ���ڸ� T&& �� �޾ƾ� �Ѵ�.(Forwarding Reference)
// 2. �����Լ��� �������� ���ڸ� ĳ���� �Ѵ�.
//    �����Լ�(static_cast<T&&>(arg))

template<typename F, typename T> void logTime(F f, T&& arg)
{
	// �Ʒ� �Լ��� logTime()�� 2��° ���ڰ�
	// lvalue��� lvalue ĳ����
	// rvalue��� rvalue ĳ����(rvalue �������� arg�� lvalue�� ����Ǿ
	//							�ٽ� rvalue�� ĳ�����Ѵٴ� �ǹ�)

	f(static_cast<T&&>(arg));
}

int main()
{
	int n = 10;
	logTime(goo, n); 
	logTime(foo, 0); 
}











