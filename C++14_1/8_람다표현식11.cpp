#include <iostream>
using namespace std;

int main()
{
	// nullary lambda
	auto f1 = [](int a) {return a * a; }; // ���ڰ� �Ѱ��ΰ��
	auto f2 = []() {return 3; }; // ���ڰ� 0���ΰ��
	auto f2 = []{return 3; }; // ���ڰ� 0���ΰ��

	// ����. �������ڴ� auto���� - ������ �������� ������ ������..
	auto f4 = [](auto a, auto b) { return a + b; };

	cout << f4(1, 2.5) << endl;
}


//void foo(auto a) {} // error. �Լ� ���ڷ� auto �ȵ�.
