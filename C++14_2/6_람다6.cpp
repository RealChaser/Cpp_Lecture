#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// ���� ǥ������ ������ ��� ���
int main()
{
	auto f1                   = [](int a, int b) { return a + b;};

	//f1 = ; ����Ұ�
	int(*f2)(int, int)        = [](int a, int b) { return a + b;};

	function<int(int,int)> f3 = [](int a, int b) { return a + b;};

	// ������ �ζ��� ġȯ���θ� ������ ������
	f1(1, 2); //   ok..
	f2(1, 2); // ġȯ �ȵ�.
	f3(1, 2); // ġȯ �ȵ�.
}




