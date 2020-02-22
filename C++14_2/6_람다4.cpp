#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

//  ���ٿ� 0Ÿ��

int main()
{
	// ��� ���� ǥ������ �ٸ� Ÿ���̴�.
	// ���ٷ� �ʱ�ȭ �� auto ������ �ٸ� ���ٸ� ������ ����.
	auto f1 = [](int a, int b) { return a + b;};
	auto f2 = [](int a, int b) { return a + b;};

	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;

	f1 = f2; // error. �ٸ� Ÿ���̴�.

	f2 = [](int a, int b) { return a + b; }; // error

}




