// 5_����
#include <algorithm>
#include <iostream>
using namespace std;

//  3. ���ٿ� Ÿ��..
// 1. ��� ���� ǥ������ �ٸ� Ÿ���̴�.
// 2. ����ǥ�������� �ʱ�ȭ�� auto ������ �ٸ� ���ٸ� ����ų�� ����.

int main()
{
	auto f1 = [](int a, int b) { return a + b;};
	auto f2 = [](int a, int b) { return a + b;};

	f2 = [](int a, int b) { return a + b;}; // �ɱ�� ?


	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;
}



