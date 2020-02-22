// 5_reference_wrapper2
// 5_reference_wrapper - 145 page
#include <iostream>
#include <functional>
using namespace std;

void goo(int& r) { r = 30; }

// ���� ����(����)�ϴ� ������� �Ϻ��� ������ �����ϱ�
// C++98���͹������� ���� ������ ��� - C++11�� ���� ���̺귯��

template<typename F, typename T> void Caller(F f, T arg)
{
	f(arg);
}

int main()
{
	int n = 10;
	//Caller(goo, n);
	Caller(goo, &n); // T�� int*�� ����.

	cout << n << endl; // 30
}







