// 5_����
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

//  4. ���ٸ� ��� ���� - 31 page

int main()
{
	auto f1 = [](int a, int b) { return a + b;};
	//f1 = [](int a, int b) { return a + b;};

	// ���� ǥ������ �Լ������ͷ� �Ͻ��� ����ȯ ����.
	int(*f2)(int, int) = [](int a, int b) { return a + b;};
	
	// STL�� function�� ���.
	function<int(int,int)> f3 = [](int a, int b) { return a + b;};

	// �Ʒ� 3���� �ζ��� ġȯ���θ� ������ ������
	f1(1, 2); // ġȯ ��.
	f2(1, 2); // ġȯ �ȵ�.
	f3(1, 2); // ġȯ �ȵ�.
}



